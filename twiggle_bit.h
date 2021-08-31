#include<stdint.h>

typedef enum {
CLEAR,
SET,
TOGGLE
} operation_t;

uint32_t twiggle_bit(uint32_t input, int bit, operation_t operation);

