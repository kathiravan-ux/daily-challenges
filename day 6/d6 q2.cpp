#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the greatest number
    if (a > b && a > c)
        printf("Greatest number = %d\n", a);
    else if (b > a && b > c)
        printf("Greatest number = %d\n", b);
    else
        printf("Greatest number = %d\n", c);

    // Find the smallest number
    if (a < b && a < c)
        printf("Smallest number = %d\n", a);
    else if (b < a && b < c)
        printf("Smallest number = %d\n", b);
    else
        printf("Smallest number = %d\n", c);

    return 0;
}

