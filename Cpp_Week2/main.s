	.file	"main.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Do Something!"
	.text
	.globl	_Z11DoSomethingRN8CppWeek27MyClassE
	.type	_Z11DoSomethingRN8CppWeek27MyClassE, @function
_Z11DoSomethingRN8CppWeek27MyClassE:
.LFB1521:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassC1ERS0_@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1521:
	.size	_Z11DoSomethingRN8CppWeek27MyClassE, .-_Z11DoSomethingRN8CppWeek27MyClassE
	.section	.rodata
.LC1:
	.string	"end"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1522:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1522
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-112(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZN8CppWeek27MyClassC1Ei@PLT
.LEHE0:
	leaq	-80(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN8CppWeek27MyClassC1Ei@PLT
.LEHE1:
	leaq	-48(%rbp), %rax
	leaq	-80(%rbp), %rdx
	leaq	-112(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB2:
	call	_ZNK8CppWeek27MyClassplERKS0_@PLT
.LEHE2:
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB3:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE3:
	movl	$0, %ebx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	movl	%ebx, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L8
	jmp	.L12
.L11:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	jmp	.L6
.L10:
	movq	%rax, %rbx
.L6:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	jmp	.L7
.L9:
	movq	%rax, %rbx
.L7:
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB4:
	call	_Unwind_Resume@PLT
.LEHE4:
.L12:
	call	__stack_chk_fail@PLT
.L8:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1522:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1522:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1522-.LLSDACSB1522
.LLSDACSB1522:
	.uleb128 .LEHB0-.LFB1522
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1522
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1522
	.uleb128 0
	.uleb128 .LEHB2-.LFB1522
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L10-.LFB1522
	.uleb128 0
	.uleb128 .LEHB3-.LFB1522
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L11-.LFB1522
	.uleb128 0
	.uleb128 .LEHB4-.LFB1522
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE1522:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2012:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L15
	cmpl	$65535, -8(%rbp)
	jne	.L15
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L15:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2012:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z11DoSomethingRN8CppWeek27MyClassE, @function
_GLOBAL__sub_I__Z11DoSomethingRN8CppWeek27MyClassE:
.LFB2013:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2013:
	.size	_GLOBAL__sub_I__Z11DoSomethingRN8CppWeek27MyClassE, .-_GLOBAL__sub_I__Z11DoSomethingRN8CppWeek27MyClassE
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z11DoSomethingRN8CppWeek27MyClassE
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1~18.04.1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
