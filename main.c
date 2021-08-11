#include "main.h"                       // Main definition

int main() {
	mainBitTest();
	
	mainBitClear();
	
	mainBitToggle();
	
	mainStringLength((uint8_t *)"Testing");
	mainStringLength((uint8_t *)"10");
	mainStringLength((uint8_t *)"Testing 100");
	mainStringLength((uint8_t *)"");
}

void mainBitTest() {
	uint32_t number = 1000;
	uint8_t bitPosition = 1;
	
	printf("-------------- bitSet --------------\n");
	printf("unset number: %d\n", number);
	printf("unset number: ");
	printBits(number); 
	printf("\n");
	
	bitSet(&number, bitPosition);
	
	printf("number with the bit '1' set: %d, at position: %d\n", number, bitPosition);
	
	printf("number with the bit '1' set: "); 
	printBits(number); 
	printf(", at position:%d \n\n", bitPosition);
}

void mainBitClear() {
	uint32_t number = 1111;
	uint8_t bitPosition = 1;
	
	printf("-------------- bitClear --------------\n");
	printf("unclear number: %d\n", number);
	printf("unclear number: ");
	printBits(number); 
	printf("\n");
	
	bitClear(&number, bitPosition);
	
	printf("number with the bit cleared: %d, at position: %d\n", number, bitPosition);
	
	printf("number with the bit cleared: "); 
	printBits(number); 
	printf(", at position: ");
	printBits(bitPosition);
	printf("\n\n");
}

void mainBitToggle() {
	uint32_t number = 9999;
	uint8_t bitPosition = 1;
	
	printf("-------------- bitToggle --------------\n");
	printf("untoggled number: %d\n", number);
	printf("untoggled number: ");
	printBits(number); 
	printf("\n");
	
	bitToggle(&number, bitPosition);
	
	printf("number with the bit toggled: %d, at position: %d\n", number, bitPosition);
	
	printf("number with the bit toggled: "); 
	printBits(number); 
	printf(", at position: ");
	printBits(bitPosition);
	printf("\n\n");
}

void mainStringLength(uint8_t *word) {
	printf("-------------- stringLength --------------\n");
	uint8_t numberLength = stringLength(word);
	
	printf("word: '%s', string length: %d\n\n", word, numberLength);
}

void printBits(uint32_t n) {
    if (n > 1)
        printBits(n / 2);
 
    printf("%d", n % 2);
}
