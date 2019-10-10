	.file	"MyClass.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Constructor called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassC2Ei
	.type	_ZN8CppWeek27MyClassC2Ei, @function
_ZN8CppWeek27MyClassC2Ei:
.LFB1522:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	$3, (%rax)
	movl	$4, %edi
	call	_Znwm@PLT
	movl	$1, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movq	-8(%rbp), %rax
	movl	$0, 16(%rax)
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1522:
	.size	_ZN8CppWeek27MyClassC2Ei, .-_ZN8CppWeek27MyClassC2Ei
	.globl	_ZN8CppWeek27MyClassC1Ei
	.set	_ZN8CppWeek27MyClassC1Ei,_ZN8CppWeek27MyClassC2Ei
	.section	.rodata
.LC1:
	.string	"Copy Constructor called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassC2ERS0_
	.type	_ZN8CppWeek27MyClassC2ERS0_, @function
_ZN8CppWeek27MyClassC2ERS0_:
.LFB1525:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$3, (%rax)
	movl	$4, %edi
	call	_Znwm@PLT
	movl	$1, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movq	-16(%rbp), %rax
	movl	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-16(%rbp), %rax
	movss	20(%rax), %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 20(%rax)
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1525:
	.size	_ZN8CppWeek27MyClassC2ERS0_, .-_ZN8CppWeek27MyClassC2ERS0_
	.globl	_ZN8CppWeek27MyClassC1ERS0_
	.set	_ZN8CppWeek27MyClassC1ERS0_,_ZN8CppWeek27MyClassC2ERS0_
	.section	.rodata
.LC2:
	.string	"Copy assign-operator called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassaSERKS0_
	.type	_ZN8CppWeek27MyClassaSERKS0_, @function
_ZN8CppWeek27MyClassaSERKS0_:
.LFB1527:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-16(%rbp), %rax
	movl	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-16(%rbp), %rax
	movss	20(%rax), %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 20(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1527:
	.size	_ZN8CppWeek27MyClassaSERKS0_, .-_ZN8CppWeek27MyClassaSERKS0_
	.section	.rodata
.LC3:
	.string	"Move Constructor called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassC2EOS0_
	.type	_ZN8CppWeek27MyClassC2EOS0_, @function
_ZN8CppWeek27MyClassC2EOS0_:
.LFB1529:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1529
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	$3, (%rax)
	movl	$4, %edi
	call	_Znwm@PLT
	movl	$1, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movq	-16(%rbp), %rax
	movl	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-16(%rbp), %rax
	movss	20(%rax), %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 20(%rax)
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1529:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1529:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1529-.LLSDACSB1529
.LLSDACSB1529:
.LLSDACSE1529:
	.text
	.size	_ZN8CppWeek27MyClassC2EOS0_, .-_ZN8CppWeek27MyClassC2EOS0_
	.globl	_ZN8CppWeek27MyClassC1EOS0_
	.set	_ZN8CppWeek27MyClassC1EOS0_,_ZN8CppWeek27MyClassC2EOS0_
	.section	.rodata
.LC4:
	.string	"Move assign-operator called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassaSEOS0_
	.type	_ZN8CppWeek27MyClassaSEOS0_, @function
_ZN8CppWeek27MyClassaSEOS0_:
.LFB1531:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1531
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC4(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-16(%rbp), %rax
	movl	16(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1531:
	.section	.gcc_except_table
.LLSDA1531:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1531-.LLSDACSB1531
.LLSDACSB1531:
.LLSDACSE1531:
	.text
	.size	_ZN8CppWeek27MyClassaSEOS0_, .-_ZN8CppWeek27MyClassaSEOS0_
	.section	.rodata
.LC5:
	.string	"+ operator called!"
.LC6:
	.string	" returning from operator + "
	.text
	.align 2
	.globl	_ZNK8CppWeek27MyClassplERKS0_
	.type	_ZNK8CppWeek27MyClassplERKS0_, @function
_ZNK8CppWeek27MyClassplERKS0_:
.LFB1532:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1532
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC5(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB0:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-48(%rbp), %rax
	movl	16(%rax), %edx
	movq	-56(%rbp), %rax
	movl	16(%rax), %eax
	addl	%eax, %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassC1Ei
.LEHE0:
	leaq	.LC6(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE1:
	jmp	.L13
.L12:
	movq	%rax, %rbx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L13:
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1532:
	.section	.gcc_except_table
.LLSDA1532:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1532-.LLSDACSB1532
.LLSDACSB1532:
	.uleb128 .LEHB0-.LFB1532
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1532
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L12-.LFB1532
	.uleb128 0
	.uleb128 .LEHB2-.LFB1532
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1532:
	.text
	.size	_ZNK8CppWeek27MyClassplERKS0_, .-_ZNK8CppWeek27MyClassplERKS0_
	.section	.rodata
.LC7:
	.string	"- operator called!"
	.text
	.align 2
	.globl	_ZNK8CppWeek27MyClassmiERKS0_
	.type	_ZNK8CppWeek27MyClassmiERKS0_, @function
_ZNK8CppWeek27MyClassmiERKS0_:
.LFB1533:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC7(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-32(%rbp), %rax
	movl	16(%rax), %edx
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	subl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8CppWeek27MyClassC1Ei
	nop
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L16
	call	__stack_chk_fail@PLT
.L16:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1533:
	.size	_ZNK8CppWeek27MyClassmiERKS0_, .-_ZNK8CppWeek27MyClassmiERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClassltERKS0_
	.type	_ZNK8CppWeek27MyClassltERKS0_, @function
_ZNK8CppWeek27MyClassltERKS0_:
.LFB1534:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	16(%rax), %edx
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	setl	%al
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1534:
	.size	_ZNK8CppWeek27MyClassltERKS0_, .-_ZNK8CppWeek27MyClassltERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClassgtERKS0_
	.type	_ZNK8CppWeek27MyClassgtERKS0_, @function
_ZNK8CppWeek27MyClassgtERKS0_:
.LFB1535:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK8CppWeek27MyClassleERKS0_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1535:
	.size	_ZNK8CppWeek27MyClassgtERKS0_, .-_ZNK8CppWeek27MyClassgtERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClassleERKS0_
	.type	_ZNK8CppWeek27MyClassleERKS0_, @function
_ZNK8CppWeek27MyClassleERKS0_:
.LFB1536:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK8CppWeek27MyClassltERKS0_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1536:
	.size	_ZNK8CppWeek27MyClassleERKS0_, .-_ZNK8CppWeek27MyClassleERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClassgeERKS0_
	.type	_ZNK8CppWeek27MyClassgeERKS0_, @function
_ZNK8CppWeek27MyClassgeERKS0_:
.LFB1537:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK8CppWeek27MyClassltERKS0_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1537:
	.size	_ZNK8CppWeek27MyClassgeERKS0_, .-_ZNK8CppWeek27MyClassgeERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClasseqERKS0_
	.type	_ZNK8CppWeek27MyClasseqERKS0_, @function
_ZNK8CppWeek27MyClasseqERKS0_:
.LFB1538:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	16(%rax), %edx
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, %edx
	jne	.L26
	movq	-8(%rbp), %rax
	movss	20(%rax), %xmm0
	movq	-16(%rbp), %rax
	movss	20(%rax), %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L26
	ucomiss	%xmm1, %xmm0
	jne	.L26
	movl	$1, %eax
	jmp	.L28
.L26:
	movl	$0, %eax
.L28:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1538:
	.size	_ZNK8CppWeek27MyClasseqERKS0_, .-_ZNK8CppWeek27MyClasseqERKS0_
	.align 2
	.globl	_ZNK8CppWeek27MyClassneERKS0_
	.type	_ZNK8CppWeek27MyClassneERKS0_, @function
_ZNK8CppWeek27MyClassneERKS0_:
.LFB1539:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNK8CppWeek27MyClasseqERKS0_
	xorl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1539:
	.size	_ZNK8CppWeek27MyClassneERKS0_, .-_ZNK8CppWeek27MyClassneERKS0_
	.section	.rodata
.LC8:
	.string	"_number: "
	.text
	.globl	_ZN8CppWeek2lsERSoRKNS_7MyClassE
	.type	_ZN8CppWeek2lsERSoRKNS_7MyClassE, @function
_ZN8CppWeek2lsERSoRKNS_7MyClassE:
.LFB1540:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	.LC8(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	-16(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1540:
	.size	_ZN8CppWeek2lsERSoRKNS_7MyClassE, .-_ZN8CppWeek2lsERSoRKNS_7MyClassE
	.section	.rodata
.LC9:
	.string	"Destructor Called!"
	.text
	.align 2
	.globl	_ZN8CppWeek27MyClassD2Ev
	.type	_ZN8CppWeek27MyClassD2Ev, @function
_ZN8CppWeek27MyClassD2Ev:
.LFB1542:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1542
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leaq	.LC9(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1542:
	.section	.gcc_except_table
.LLSDA1542:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1542-.LLSDACSB1542
.LLSDACSB1542:
.LLSDACSE1542:
	.text
	.size	_ZN8CppWeek27MyClassD2Ev, .-_ZN8CppWeek27MyClassD2Ev
	.globl	_ZN8CppWeek27MyClassD1Ev
	.set	_ZN8CppWeek27MyClassD1Ev,_ZN8CppWeek27MyClassD2Ev
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2033:
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
	jne	.L38
	cmpl	$65535, -8(%rbp)
	jne	.L38
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L38:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2033:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN8CppWeek27MyClassC2Ei, @function
_GLOBAL__sub_I__ZN8CppWeek27MyClassC2Ei:
.LFB2034:
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
.LFE2034:
	.size	_GLOBAL__sub_I__ZN8CppWeek27MyClassC2Ei, .-_GLOBAL__sub_I__ZN8CppWeek27MyClassC2Ei
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN8CppWeek27MyClassC2Ei
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
