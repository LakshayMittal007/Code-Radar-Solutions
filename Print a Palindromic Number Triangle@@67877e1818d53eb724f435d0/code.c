#include<stdio.h>
int main(){
    int i,j,n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
            }
        for(int z=i-1;z>=1;z--){
            printf("%d",z);
        }
    }
    printf("\n");
}