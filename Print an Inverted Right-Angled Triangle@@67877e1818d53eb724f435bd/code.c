#include<stdio.h>
int main(){
    int n,i=1,j=1;
    scanf("%d",&n);
    for(i;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}