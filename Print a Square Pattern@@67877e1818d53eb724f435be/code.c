#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j=j*i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}