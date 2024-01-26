ENTRY(reset)
MEMORY 
{
	Mem(rwx):ORIGIN = 0x00000000 , LENGTH = 64M
}
SECTIONS
{	
	. =0x10000;
	.startup_afifi . :
	{
		startup.o (.text)
	}>Mem
			
	.text_afifi :
	{
		*(.text) *(.rodata)
	}>Mem
			
	.data_afifi :
	{
		*(.data)
	}>Mem
			
	.bss_afifi :
	{
		*(.bss) *(COMMON)
	}>Mem
	. = . + 0x1000;
	stack_top = . ;
}