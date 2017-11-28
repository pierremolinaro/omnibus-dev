;----------------------------------------------------------------------------------------------------------------------*
;   configuration.on.boot                                                                                              *
;----------------------------------------------------------------------------------------------------------------------*

define void @configuration.on.boot () nounwind minsize optsize {
  call void @boot ()
  call void @clear.bss ()
  call void @copy.data ()
  call void @init ()
  call void @start.tasks ()
  ret  void
}
