#include<stdio.h>
int main(){
    int n,i=1;
    int j=1;
    scanf("%d",&n);
    for(i;i<=n;i++){
        for(j=n;j<=i-1;j--){
            printf("*");
        }
    }
    return 0;
}