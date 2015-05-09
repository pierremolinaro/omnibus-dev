	.syntax unified
	.cpu cortex-m4
  .thumb

@----------------------------------------------------------------------------*

  .global raise_exception_internal
	.type	raise_exception_internal, %function

  .global proc_svcHandler
	.type	proc_svcHandler, %function

@----------------------------------------------------------------------------*

proc_svcHandler:
  b raise_exception_internal

  .global raise_exception_via_svc
	.type	raise_exception_via_svc, %function

raise_exception_via_svc:
  svc  #0
  bx   lr

@----------------------------------------------------------------------------*
