#include <stdio.h>

int main() {
    int N, lastDigit, remainingDigits;

    
    printf("Enter a number: ");
    scanf("%d", &N);

    
    lastDigit = N % 10;

   
    remainingDigits = N / 10;

    
    printf("Last digit: %d\n", lastDigit);
    printf("All digits except last digit: %d\n", remainingDigits);

    return 0;
}
