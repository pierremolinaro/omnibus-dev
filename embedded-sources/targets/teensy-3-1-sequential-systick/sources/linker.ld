/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                                   Memory                                   */
/*                                                                            */
/*----------------------------------------------------------------------------*/

MEMORY {
  flash (rx) : ORIGIN = 0, LENGTH = 256k 
  sram_u (rwx) : ORIGIN = 0x20000000, LENGTH = 32k 
}

/*----------------------------------------------------------------------------*/

__sram_u_end = 0x20000000 + 32k ;

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                                ISR Vectors                                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .vectors : {
    __vectors_start = . ;
    KEEP (*(.isr_vector)) ;
    __vectors_end = . ;
  } > flash
}

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                                    Code                                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .text : {
    FILL(0xff)
    __code_start = . ;
  /*--- Tableau des routines d'initialisation */
    . = ALIGN (4) ;
    __init_routine_array_start = . ;
    KEEP (*(init_routine_array)) ;
    . = ALIGN (4) ;
    __init_routine_array_end = . ;
  /*--- Initialisation des objets globaux C++ */
    . = ALIGN (4) ;
    __constructor_array_start = . ;
    KEEP (*(.init_array)) ;
    . = ALIGN (4) ;
    __constructor_array_end = . ;
  /*--- Real Interrupt Service Routine Array */
    . = ALIGN (4) ;
    __real_time_isr_array_start = . ;
    KEEP (*(real_time_isr_array)) ;
    . = ALIGN (4) ;
    __real_time_isr_array_end = . ;
  /*--- Code */
    *(.text.*) ;
    *(.text) ;
    *(text) ;
    *(.gnu.linkonce.t.*) ;
  /*---- ROM data ----*/
    . = ALIGN(4);
    *(.rodata);
    . = ALIGN(4);
    *(.rodata*);
    . = ALIGN(4);
    *(.gnu.linkonce.r.*);
    . = ALIGN(4);
    *(.glue_7t);
    . = ALIGN(4);
    *(.glue_7);
    . = ALIGN(4);
  } > flash

  .ARM.exidx : {
    *(.ARM.exidx* .gnu.linkonce.armexidx.*);
    __code_end = . ;
  } > flash
}

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                          Data (initialized data)                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .data : {
    FILL (0xFF)
    . = ALIGN (4) ;
    __data_start = . ;
    * (.data.*init*) ;
    * (.data*) ;
    . = ALIGN (4) ;
    __data_end = . ;
  } > sram_u AT > flash
}

/*----------------------------------------------------------------------------*/

__data_load_start = LOADADDR (.data) ;
__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                          BSS (uninitialized data)                          */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .bss : {
    . = ALIGN(4);
    __bss_start = . ;
    * (.bss.*) ;
    * (.bss) ;
    * (COMMON) ;
    . = ALIGN(4);
    __bss_end = . ;
  } > sram_u
}

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                                System stack                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .system_stack :{
    . = ALIGN (4) ;
    __system_stack_start = . ;
    . += 1k ;
    . = ALIGN (4) ;
    __system_stack_end = . ;
  } > sram_u
}

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*                                    Heap                                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

SECTIONS {
  .heap : {
    . = ALIGN (4) ;
    __heap_start = . ;
  } > sram_u
}

/*----------------------------------------------------------------------------*/

__heap_end = __sram_u_end ;

/*----------------------------------------------------------------------------*/
