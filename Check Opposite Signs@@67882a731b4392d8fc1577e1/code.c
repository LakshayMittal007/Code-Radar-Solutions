#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if((a>=0 && b>=0)||(a<=0 && b<=0)){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}