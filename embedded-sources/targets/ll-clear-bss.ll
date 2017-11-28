;----------------------------------------------------------------------------------------------------------------------*
;   Clear BSS                                                                                                          *
;----------------------------------------------------------------------------------------------------------------------*
;void clearBSS (void) {
;  extern unsigned __bss_start ;
;  extern unsigned __bss_end ;
;  unsigned * p = & __bss_start ;
;  while (p != & __bss_end) {
;    * p = 0 ;
;    p ++ ;
;  }
;}
;----------------------------------------------------------------------------------------------------------------------*

@__bss_start = external global [0 x i32]
@__bss_end   = external global [0 x i32]

;----------------------------------------------------------------------------------------------------------------------*

define internal void @clear.bss () nounwind minsize optsize {
entry:
  %startPtr = getelementptr [0 x i32], [0 x i32]* @__bss_start, i32 0, i32 0
  %endPtr   = getelementptr [0 x i32], [0 x i32]* @__bss_end,   i32 0, i32 0
  br label %bss.loop.test
bss.loop.test:
  %p = phi i32* [%startPtr, %entry], [%p.next, %bss.loop]
  %completed = icmp eq i32* %p, %endPtr
  br i1 %completed, label %bss.loop.completed, label %bss.loop
bss.loop:
  store i32 0, i32* %p, align 4
  %p.next = getelementptr inbounds i32, i32* %p, i32 1
  br label %bss.loop.test
bss.loop.completed:
  ret void
}

