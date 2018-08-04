;----------------------------------------------------------------------------------------------------------------------*
;   Copy Byte Array                                                                                                    *
;----------------------------------------------------------------------------------------------------------------------*

define internal void @copy.byte.array (i8* %target.initial, i8* %source.initial, i32 %byte.count.initial) nounwind {
entry:
  br label %loop
loop:
  %source.current = phi i8* [%source.initial, %entry], [%source.next, %loop.next]
  %target.current = phi i8* [%target.initial, %entry], [%target.next, %loop.next]
  %byte.count.current = phi i32 [%byte.count.initial, %entry], [%byte.count.next, %loop.next]
  %v = load i8, i8* %source.current
  store i8 %v, i8* %target.current
  %byte.count.next = sub i32 %byte.count.current, 1
  %byte.count.is.zero = icmp eq i32 %byte.count.next, 0
  br i1 %byte.count.is.zero, label %loop.completed, label %loop.next
loop.next:
  %source.next = getelementptr inbounds i8, i8* %source.current, i32 1
  %target.next = getelementptr inbounds i8, i8* %target.current, i32 1
  br label %loop
loop.completed:
  ret void
}
