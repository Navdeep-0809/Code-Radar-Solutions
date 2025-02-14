#include <stdio.h>
int main() {
    int num1, num2, result;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    result = num1 | num2;
    printf("%d", num1, num2, result);
    return 0;
}
