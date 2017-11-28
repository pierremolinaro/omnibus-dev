;----------------------------------------------------------------------------------------------------------------------*
;   Copy .data section                                                                                                 *
;----------------------------------------------------------------------------------------------------------------------*
;void copyData (void) {
;  extern unsigned __data_start ;
;  extern unsigned __data_end ;
;  extern unsigned __data_load_start ;
;  unsigned * pSrc = & __data_load_start ;
;  unsigned * pDest = & __data_start ;
;  while (pDest != & __data_end) {
;    * pDest = * pSrc ;
;    pDest ++ ;
;    pSrc ++ ;
;  }
;}
;----------------------------------------------------------------------------------------------------------------------*

@__data_start = external global [0 x i32]
@__data_end = external global [0 x i32]
@__data_load_start = external global [0 x i32]

;----------------------------------------------------------------------------------------------------------------------*

define internal void @copy.data () nounwind minsize optsize {
entry:
  %data_start = getelementptr  [0 x i32], [0 x i32]* @__data_start, i32 0, i32 0
  %data_end = getelementptr  [0 x i32], [0 x i32]* @__data_end, i32 0, i32 0
  %data_load_start = getelementptr  [0 x i32], [0 x i32]* @__data_load_start, i32 0, i32 0
  br label %copy.loop.test

copy.loop.test:
  %pDest = phi i32* [%data_start, %entry], [%pDestInct, %copy.loop]
  %pSource = phi i32* [%data_load_start, %entry], [%pSourceInc, %copy.loop]
  %equal = icmp eq i32* %pDest, %data_end
  br i1 %equal, label %copy.completed, label %copy.loop

copy.loop:
  %value = load i32, i32* %pSource
  store i32 %value, i32* %pDest, align 4
  %pDestInct = getelementptr inbounds i32, i32* %pDest, i32 1
  %pSourceInc = getelementptr inbounds i32, i32* %pSource, i32 1
  br label %copy.loop.test

copy.completed:
  ret void
}

