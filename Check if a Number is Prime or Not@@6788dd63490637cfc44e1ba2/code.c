#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
    } else if (number == 2 || number == 3 || number == 5 || number == 7) {
        printf("%d is a prime number.\n", number);
    } else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) {
        printf("%d is not a prime number.\n", number);
    } else {
        printf("%d is a prime number.\n", number);
    }

    return 0;
}
