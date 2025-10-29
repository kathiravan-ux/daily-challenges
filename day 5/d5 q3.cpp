#include <stdio.h>
#include <math.h>  // for sqrt() and pow()

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Distance formula: v((x2 - x1)² + (y2 - y1)²)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the two points = %.2f\n", distance);

    return 0;
}

