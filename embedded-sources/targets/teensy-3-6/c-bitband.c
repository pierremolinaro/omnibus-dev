//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   BITBAND
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// bit_word_offset = (byte_offset x 32) + (bit_number x 4)
// bit_word_addr = bit_band_base + bit_word_offset
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void bitband (const unsigned char inBit, const unsigned inAddress, const unsigned char inValue) asm ("!FUNC!bitband.set") ;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void bitband (const unsigned char inBit, const unsigned inAddress, const unsigned char inValue) {
  const unsigned register_base = 0x4000 * 0x10000 ;
  const unsigned byte_offset = inAddress - register_base ;
  const unsigned bit_word_offset = (byte_offset * 32) + (inBit * 4) ;
  const unsigned bit_band_base = 0x4200 * 0x10000 ;
  const unsigned bit_word_addr = bit_band_base + bit_word_offset ;
  unsigned * ptr = (unsigned *) bit_word_addr ;
  *ptr = inValue ;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
