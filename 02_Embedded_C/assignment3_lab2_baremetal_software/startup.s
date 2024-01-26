/* startup_cortexM3.s 
   Eng.Amr Afifi 
*/
.section .vectors
.word	0x20001000        /* stack_top address */
.word	_reset            /* Reset */
.word	vector_handler    /* NMI */
.word	vector_handler    /* Hard Fault */
.word	vector_handler    /* MM Fault */
.word	vector_handler    /* Bus Fault */
.word	vector_handler	  /* Usage Fault*/
.word	vector_handler	  /* RESERVED*/
.word	vector_handler	  /* RESERVED*/
.word	vector_handler	  /* RESERVED*/
.word	vector_handler	  /* RESERVED*/
.word	vector_handler	  /* SV call*/
.word	vector_handler	  /* Debug reserved*/
.word	vector_handler	  /* RESERVED*/
.word	vector_handler	  /* PendSV*/
.word	vector_handler	  /* SysTick*/
.word	vector_handler	  /* IRQ0*/
.word	vector_handler	  /* IRQ1*/
.word	vector_handler	  /* IRQ2*/
.word	vector_handler	  /* IRQ3*/
.word	vector_handler	  /* IRQ4*/
.word	vector_handler	  /* IRQ5*/
.word	vector_handler	  /* IRQ6*/
.word	vector_handler	  /* IRQ7*/

.section .text 
_reset:
	bl main
	b .
	
.thumb_func
vector_handler:
	b _reset