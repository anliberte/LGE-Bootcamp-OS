@ DRAM Address

	.equ	DRAM_START	,0x40000000 

@ STACK Configuration 

	.equ	STACK_BASE	,0x44000000
	.equ	STACK_SIZE		,0x800000
	.equ	STACK_LIMIT	,STACK_BASE-STACK_SIZE

@ Heap Configuration

	.equ	HEAP_END_ADDRESS , STACK_LIMIT-8	

	.equ	ABORT_STACK_SIZE	, (1*1024)
	.equ	UNDEF_STACK_SIZE	, (1*1024)
	.equ	FIQ_STACK_SIZE		, (1*1024)
	.equ	SVC_STACK_SIZE		, (16*1024)
	.equ	IRQ_STACK_SIZE		, (32*1024)

	.equ	IRQ_STACK_BASE			, (STACK_BASE)
	.equ	SVC_STACK_BASE			, (IRQ_STACK_BASE - IRQ_STACK_SIZE) 
	.equ	FIQ_STACK_BASE			, (SVC_STACK_BASE	- SVC_STACK_SIZE)
	.equ	UNDEF_STACK_BASE		, (FIQ_STACK_BASE	- FIQ_STACK_SIZE)
	.equ	ABORT_STACK_BASE		, (UNDEF_STACK_BASE -	UNDEF_STACK_SIZE)
	.equ	SYS_STACK_BASE			, (ABORT_STACK_BASE	- ABORT_STACK_SIZE)
	
@ definitions

	.equ	USER_MODE			, 	0x10
	.equ	FIQ_MODE			, 	0x11
	.equ	IRQ_MODE			, 	0x12
	.equ	SVC_MODE			, 	0x13
	.equ	ABORT_MODE			, 	0x17
	.equ	UNDEF_MODE			, 	0x1B
	.equ	SYS_MODE			,		0x1F

	.equ	IRQ_BIT				, 	(1<<7)
	.equ	FIQ_BIT				,		(1<<6)
