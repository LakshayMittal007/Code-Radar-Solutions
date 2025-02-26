#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=65;j<=n-i+65;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}