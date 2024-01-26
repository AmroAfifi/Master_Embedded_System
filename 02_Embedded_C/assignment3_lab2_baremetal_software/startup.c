// startup.c 
// Eng.Amr Afifi
#include <stdint.h>

#define STACK_START_SP 0x20001000

extern int main (void);

void reset_handler(void);

void default_handler(){
	reset_handler();
}

void NMI_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void H_fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void MM_fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void Bus_fault(void) __attribute__ ((weak, alias ("default_handler")));;
void Usage_fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;

extern unsigned int _stack_top;

uint32_t vectors[] __attribute__((section(".vectors"))) ={
	(uint32_t) &_stack_top,
	(uint32_t) &reset_handler , 
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_fault_Handler,
	(uint32_t) &MM_fault_Handler,
	(uint32_t) &Bus_fault,
	(uint32_t) &Usage_fault_Handler
};
extern uint32_t _E_text ;
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_bss ;
extern uint32_t _E_bss ;

void reset_handler (){
	// copy the .data section from flash to ram
	uint32_t data_size = (uint8_t *)&_E_DATA - (uint8_t *)&_S_DATA ;
	uint8_t* p_src = (uint8_t *)&_E_text ;
	uint8_t* p_dst = (uint8_t *)&_S_DATA ;
	uint8_t i=0;
	for(i=0;i<data_size ; i++){
		*( (uint8_t *)p_dst++) = *( (uint8_t *)p_src++);
	}
	//init .bss 
	uint32_t bss_size = (uint8_t *)&_E_bss - (uint8_t *)&_S_bss ;
	p_dst = (uint8_t *)&_S_bss ;
	for(i=0;i<bss_size ; i++){
		*( (uint8_t *)p_dst++) = (uint8_t )0;
	}

	// jump to the main
	main();
}