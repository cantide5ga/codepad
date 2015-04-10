#include <stdio.h>

//Add all the natural numbers below one thousand that are multiples of 3 or 5.
//http://codepad.org/Q27NOoyi

int main()
{
	unsigned long int sum = 0;

  int i;
	for(i = 1; i < 1000; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%u", sum);

	return 0;
}
