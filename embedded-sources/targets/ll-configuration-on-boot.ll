;----------------------------------------------------------------------------------------------------------------------*
;   configuration.on.boot                                                                                              *
;----------------------------------------------------------------------------------------------------------------------*

define void @configuration.on.boot () nounwind minsize optsize {
  call void @boot ()
  call void @clearBSS ()
  call void @copyData ()
  call void @init ()
  call void @start.tasks ()
  ret  void
}

