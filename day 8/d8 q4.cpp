#include <stdio.h>

int main() {
    int num, temp, digit;
    int count = 0;
    int sum = 0;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    temp = num;

    if (num == 0) {  // Special case for 0
        count = 1;
        sum = 0;
        product = 0;
    } else {
        while (temp > 0) {
            digit = temp % 10;   // Get last digit
            sum += digit;        // Add to sum
            product *= digit;    // Multiply to product
            count++;             // Increment count
            temp /= 10;          // Remove last digit
        }
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}

