#include <stdio.h>
#include <limits.h> // To use INT_MAX

int main() {
    int num;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the Most Significant Bit (MSB) for a 32-bit integer
    if (num & (1 << (sizeof(int) * CHAR_BIT - 1))) {
        printf("The Most Significant Bit (MSB) of %d is set (1).\n", num);
    } else {
        printf("The Most Significant Bit (MSB) of %d is not set (0).\n", num);
    }

    return 0;
}
