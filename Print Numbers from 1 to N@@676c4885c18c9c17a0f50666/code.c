#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if(!(i==1)){
            printf(" ")
            printf("%d", i);
        }else{
            printf("%d",i);
        }
    }
     return 0;
}
