#include <stdio.h>
#include <string.h>

//http://codepad.org/twxAzLVD

//The program is a function that will output an integer, but does not have an argument to pass thus void.
int main(void){
	char punc = '!'; // Single quotes for char
	int num = 0;

	printf("Hello%c\n", punc); // %c will be replaced with the char variable following
        num = 5 + printf("five!"); //printf returns an unsigned int and still does its job
        printf("%d\n", num); // %d will be replaced with the int variable following

	//Pointer junk
	int total = 7;
	int *ptr = &total; // * tells C that this variable is of type pointer, the & reads "the address of"

	printf("TOTAL using a pointer is: %d\n", *ptr); // Using * here is called dereferencing and asks show the value at the ptr address
	printf("TOTAL using the variable is: %d\n", total);
	printf("The address of variable TOTAL using ptr is: %p\n", ptr); // %p will be replaced with the pointer address
	printf("The address of variable TOTAL using &total is: %p\n", &total); // as such, pointer = &variable
	printf("The address of the pointer itself is: %p\n\n", &ptr); // The variable ptr also its value in a different address in memory

	int test = 250;
	printf("int test = %d\n", test);
	int *pointer = &test;
	printf("int *pointer = &test (*POINTER will hold an integer and is of type pointer.  It will equal the memory address of TEST.\n");
	printf("So, *POINTER = TEST, because the * used in this case, asks for the value at the memory address.  Both are %d.\n", test);
	printf("The actual address (%p) can be expressed with the value of POINTER (held in the variable) or &TOTAL (address of following variable).\n", pointer);
	printf("Also, the address held in POINTER also is held someplace in memory which can be found with &POINTER.  It is being held at address %p.\n", &pointer);

	//The value of TEST can be changed either by directly changing it at the address with a pointer, or changing the value of TEST:
	*pointer = 300;
	printf("%d\n", test);
	test = 500;
	printf("%d\n", *pointer);

	char arr[10] = "cantide5ga";
	char *ptr2 = arr;

        int count = NULL; // Good practice to at the very least set a declaration to NULL
	//strlen finds the length of a variable
	for(count = 0; count<=strlen(arr); count++){ // Can't declare a variable inside a for loop in C; must use C++.
        	printf("%c\n",*ptr2);
                ptr2 = ptr2 + 1; // Moves to the next memory location where the size of the move is based on the number bytes used by the variables type
        }
  	//2do: modify the array above piece by piece using bother pointers and standard variable manipulation

	return 0;
}
