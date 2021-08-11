#include "utilities.h"

#define ONE 1U

void bitSet(uint32_t *ptr, uint8_t bit) {
	*ptr |= ONE << bit;
}

void bitClear(uint32_t *ptr, uint8_t bit) {
	*ptr &= ~(ONE << bit);
}

void bitToggle(uint32_t *ptr, uint8_t bit) {
	*ptr ^= ONE << bit;
}

uint8_t stringLength(uint8_t *str) {
	return (uint8_t)strlen((char *)str);
}
