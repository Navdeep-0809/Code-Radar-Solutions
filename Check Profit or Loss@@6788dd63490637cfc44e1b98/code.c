#include<stdio.h>
int main(){
    int c,s;
    scanf("%d %d",&c,&s);
    if(s>c){
        printf("Profit");
    }else if(c==s){
        printf("no profit/no loss");
    }else{
        printf("Loss");
    }
    return 0;
}