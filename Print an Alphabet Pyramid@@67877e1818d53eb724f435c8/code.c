#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i==1;i<=n;i++){
        for(j=2;j<=i+1;j++){
            printf("%d ",i+1);
            i++;
        }
        printf("\n");
    }
    return 0;
}