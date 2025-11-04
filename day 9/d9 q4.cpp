#include <stdio.h>

int main() {
    int num1, num2, temp1, temp2, gcd, lcm;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    temp1 = num1;
    temp2 = num2;

    // Find GCD using Euclidean algorithm
    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    gcd = temp1;

    // Calculate LCM
    lcm = (num1 * num2) / gcd;

    // Display results
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}

