#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k=2*i-1;k++){
            if(k==1||k==2*i-1){
                printf("*");
            }
            else{printf(" ");}
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int z=1;z<=2*i-1;z++){
            if(z==1||z==2*i-1){
                printf("*");
            }
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}