#include <stdio.h>

//Find the sum of the even-valued terms found in a Fibonacci sequence below four million.
//http://codepad.org/GDPqid9Q

int main()
{
	unsigned long int n0 = 0;
	unsigned long int n1 = 1;
	unsigned long int term = 0;
	unsigned long int sum = 0;


	do {
		term = n0 + n1;

		if(term % 2 == 0)
			sum += term;

		n0 = n1;
		n1 = term;
	} while(term < 4000000);

	printf("%u", sum);

	return 0;

}
