#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;                // Get last digit
        reversedNum = reversedNum * 10 + remainder;  // Build reversed number
        num /= 10;                           // Remove last digit
    }

    // Check if palindrome
    if (originalNum == reversedNum)
        printf("%d is a Palindrome.\n", originalNum);
    else
        printf("%d is Not a Palindrome.\n", originalNum);

    return 0;
}

