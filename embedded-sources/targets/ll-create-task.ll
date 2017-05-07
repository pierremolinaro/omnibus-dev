;----------------------------------------------------------------------------------------------------------------------*
;   Real time Kernel interface                                                                                         *
;----------------------------------------------------------------------------------------------------------------------*

;--- Create task
declare void @kernel_create_task (i32 %inTaskIndex, i32* %inStackBufferAddress, i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind
