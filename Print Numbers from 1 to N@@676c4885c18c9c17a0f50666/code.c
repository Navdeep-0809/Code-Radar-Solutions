#include<stdio.h>
int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    while(i<=n){
        if(!(i==1)){
            printf(" ");
            printf("%d",i);
        }else{
             printf("%d",i);
        }
        i++;
    }
    return 0;
}