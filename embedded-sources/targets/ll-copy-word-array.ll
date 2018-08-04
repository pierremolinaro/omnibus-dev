;----------------------------------------------------------------------------------------------------------------------*
;   Copy Word Array                                                                                                    *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @copy.word.array (i32* %target.initial, i32* %source.initial, i32 %word.count.initial) nounwind {
entry:
  br label %loop
loop:
  %source.current = phi i32* [%source.initial, %entry], [%source.next, %loop.next]
  %target.current = phi i32* [%target.initial, %entry], [%target.next, %loop.next]
  %word.count.current = phi i32 [%word.count.initial, %entry], [%word.count.next, %loop.next]
  %v = load i32, i32* %source.current
  store i32 %v, i32* %target.current
  %word.count.next = sub i32 %word.count.current, 1
  %word.count.is.zero = icmp eq i32 %word.count.next, 0
  br i1 %word.count.is.zero, label %loop.completed, label %loop.next
loop.next:
  %source.next = getelementptr inbounds i32, i32* %source.current, i32 1
  %target.next = getelementptr inbounds i32, i32* %target.current, i32 1
  br label %loop
loop.completed:
  ret void
}
