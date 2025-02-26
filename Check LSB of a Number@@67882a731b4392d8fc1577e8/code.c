#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a= n & 1;
    if(n%2!=1){
        printf("Set");}
    else{printf("Not Set");}
    return 0;}