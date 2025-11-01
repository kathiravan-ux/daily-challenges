#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 1:
        case 2:
            printf("Season: Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Season: Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Season: Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Season: Autumn\n");
            break;
        default:
            printf("Invalid month! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}

