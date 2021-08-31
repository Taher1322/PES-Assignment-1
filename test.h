
#include <stdio.h>
#include <stdint.h>
#include <grab_three_bit.h>
#include <twiggle_bit.h>
#include <uint_to_binstr.h>
#include <int_to_binstr.h>
#include <uint_to_hexstr.h>
#include <hexdump.h>

uint32_t test_grab_three_bits(uint32_t input, int start_bit);
uint32_t test_twiggle_bit(uint32_t input, int bit, operation_t operation);
int test_uint_to_binstr(char *str, size_t size, uint32_t num, uint8_t nbits);
int test_int_to_binstr(char *str, size_t size, uint32_t num, uint8_t nbits);
int test_uint_to_hexstr(char *str, size_t size, uint32_t num, uint8_t nbits);
char test_hexdump(char *str, size_t size, const void *loc, size_t nbytes);