#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
    for(int j=1;j<=i;j+=1){
        if(!(i==1||j==1)){
            printf(" ");
            printf("%d",j);
        }else{
            printf("%d",j);
        }
    }
    printf("\n");
}
return 0;
}