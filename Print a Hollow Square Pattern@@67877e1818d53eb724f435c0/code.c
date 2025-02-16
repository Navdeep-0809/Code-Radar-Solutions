#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=2;i<=N;i++){
        for(int j=2;j=N;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}