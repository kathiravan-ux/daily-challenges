#include <stdio.h>
#include <math.h> // for M_PI (value of p)

int main() {
    int choice;
    float length, breadth, side, base, height, radius, area;

    printf("Choose the shape to find area:\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter length and breadth of Rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of Rectangle = %.2f\n", area);
    }
    else if (choice == 2) {
        printf("Enter side of Square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square = %.2f\n", area);
    }
    else if (choice == 3) {
        printf("Enter base and height of Triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f\n", area);
    }
    else if (choice == 4) {
        printf("Enter radius of Circle: ");
        scanf("%f", &radius);
        area = M_PI * radius * radius; // pr²
        printf("Area of Circle = %.2f\n", area);
    }
    else {
        printf("Invalid Choice!\n");
    }

    return 0;
}

