#include <stdio.h>

int main() {
    int ascii; 

    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);  

    printf("The character for ASCII value %d is '%c'\n", ascii, ascii);
    return 0;
}
