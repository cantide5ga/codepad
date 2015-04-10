#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//http://codepad.org/FkUtxLlE

int main()
{
	char bit[256] = "100000100000000000000000000000000";
	//gets (bit);

	int numberOfDigits = strlen(bit);
	char currentDigit;
	int charValue = 0;
	double decimal = 0;

	int power;
	for (power = 0; power <= numberOfDigits - 1; power++) {
		currentDigit = bit[numberOfDigits - power];
		charValue = atoi(&currentDigit);
		decimal =  decimal + charValue * pow(2, power);
	}

	printf("%d", decimal);

	return 0;
}
