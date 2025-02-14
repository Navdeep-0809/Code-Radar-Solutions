#include <stdio.h>

int main() {
    int num, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("There are no set bits.\n");
        return 0;
    }

    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("The position of the lowest set bit is: %d\n", position);

    return 0;
}
