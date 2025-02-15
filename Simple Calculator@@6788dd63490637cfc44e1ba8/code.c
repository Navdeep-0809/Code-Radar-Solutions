#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    scanf("%c", &operator);
    scanf("%lf %lf", &num1, &num2);
    if (operator == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero.\n");
        }
    } else {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
