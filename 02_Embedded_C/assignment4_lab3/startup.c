// startup.c 
// Eng.Amr Afifi
#include <stdint.h>

extern int main (void);

void reset_handler();

void default_handler(){
	reset_handler();
}

void NMI_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void H_fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;

// reserve stack size 
static unsigned long Stack_top[256] ; // 4*256 =>1024 Bus_fault

void (*const g_p_f_vectors[]) () __attribute__((section(".vectors"))) =  
	{
	(void (*)())((unsigned long)Stack_top +sizeof(Stack_top)),  // cast to pointer to func that take nothing and return void 
	&reset_handler ,
	&NMI_Handler,
	&H_fault_Handler
	};

extern unsigned long  _E_text ;
extern unsigned long _S_DATA ;
extern unsigned long _E_DATA ;
extern unsigned long _S_bss ;
extern unsigned long _E_bss ;

void reset_handler (){
	
	// copy the .data section from flash to ram
	unsigned long data_size = (unsigned char *)&_E_DATA - (unsigned char *)&_S_DATA ;
	unsigned char* p_src = (unsigned char *)&_E_text ;
	unsigned char* p_dst = (unsigned char *)&_S_DATA ;
	unsigned long i=0;
	for(i=0;i<data_size ; i++){
		*( (unsigned char *)p_dst++) = *( (unsigned char *)p_src++);
	}
	//init .bss 
	unsigned long bss_size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss ;
	p_dst = (unsigned char *)&_S_bss ;
	for(i=0;i<bss_size ; i++){
		*( (unsigned char *)p_dst++) = (unsigned char )0;
	}

	// jump to the main
	main();
}