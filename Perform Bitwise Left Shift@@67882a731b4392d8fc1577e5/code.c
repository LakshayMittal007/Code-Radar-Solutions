#include<stdio.h>
int main(){
    int n,a;
    int r=1;
    scanf("%d d",&n,&a);
    r = n >> a;
    printf("%d",r);
    return 0;
}