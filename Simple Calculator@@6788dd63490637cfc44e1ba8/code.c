#include<stdio.h>
int main(){
    char c;
    int a,b;
    scanf("%c",&c);
    scanf("%d %d",&a,&b);
    if(c='+'){
        printf("%d",a+b);
    }else if(c='-'){
        printf("%d",a-b);
    }else if(c='*'){
        printf("%d",a*b);
    }else if(c='/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
    return 0;
}