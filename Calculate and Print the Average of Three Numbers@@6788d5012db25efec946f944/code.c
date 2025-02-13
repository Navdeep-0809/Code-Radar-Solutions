#include<stdio.h>
int main(){
    int a,b,c,e,r;
    scanf("%d %d %d",&a,&b,&c);
    e=(a+b+c);
    r=e/3;
    printf("Average: %.2f",r);
    return 0;
}