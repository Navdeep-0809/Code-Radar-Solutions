#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number <= 1) {
        printf("Not Prime");
    } else if (number == 2 || number == 3 || number == 5 || number == 7) {
        printf("Prime");
    } else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) {
        printf("Not Prime");
    } else {
        printf("Prime");
    }
    return 0;
}
