#include<stdio.h>
int main(){
    int a,i,n;
    n=0;
    i=1;
    scanf("%d",&a);
    for(i;i==a;i++){
        if(a%i==0){
            n=n+1;
        }
    }
    if(n==2){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
}