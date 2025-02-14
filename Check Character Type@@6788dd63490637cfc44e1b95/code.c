#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c", ch);
        } else {
            printf("%c", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("%c",ch);
    } else {
        printf("%c", ch);
    }
    return 0;
}
