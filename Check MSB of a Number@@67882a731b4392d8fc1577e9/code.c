#include <stdio.h>
#include <limits.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num & (1 << (sizeof(int) * CHAR_BIT - 1))) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}
