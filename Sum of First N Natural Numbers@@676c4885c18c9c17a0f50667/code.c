#include <stdio.h>
int main() {
    int N, i ,s=0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        s+=i;
    }
    printf("%d",s);
    return 0;
}
