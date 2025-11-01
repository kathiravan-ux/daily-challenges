#include <stdio.h>

int main() {
    int num, lastDigit, nextDigit;
    int isAscending = 1;  // Assume digits are in ascending order

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        lastDigit = num % 10;        // Get the last digit
        num = num / 10;              // Remove the last digit
        nextDigit = num % 10;        // Get the next digit
        
        if (lastDigit < nextDigit) { // Check ascending order
            isAscending = 0;
            break;
        }
    }

    if (isAscending)
        printf("Digits are in ascending order.\n");
    else
        printf("Digits are NOT in ascending order.\n");

    return 0;
}

