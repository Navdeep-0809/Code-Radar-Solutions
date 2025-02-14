#include <stdio.h>
#include <limits.h> // To use INT_MAX

int main() {
    int num;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the Most Significant Bit (MSB) for a 32-bit integer
    if (num & (1 << (sizeof(int) * CHAR_BIT - 1))) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
