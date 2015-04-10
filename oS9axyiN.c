#include <stdio.h>

//http://codepad.org/oS9axyiN

int main(void) {
    char* string = "hello\n";

    printf("%c", *(string));
    printf("%c", *(string + printf("\n")));
    printf("%c", *(string + printf(" \n")));
    printf("%c", *(string + printf("  \n")));
    printf("%c", *(string + printf("   \n")));
    printf("%c", *(string + printf("    \n")));

    return 0;
}
