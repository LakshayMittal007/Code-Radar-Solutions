#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i==1;i<=n;i++){
        for(j=i+1;j>=2*i-1;j++){
            int k=i+1;
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}