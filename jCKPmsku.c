#include <stdio.h>

//First thirty-four numbers in a Fibonacci sequence
//http://codepad.org/jCKPmsku

int main()
{
	unsigned long int n0 = 0;
	unsigned long int n1 = 1;
	unsigned long int term = 0;

	// Seed
	printf("%d %d ", 0, 1);

	int i;
	for(i = 0; i < 32; i++) {
		term = n0 + n1;

		printf("%u ", term);

		n0 = n1;
		n1 = term;
	}

	return 0;

}
