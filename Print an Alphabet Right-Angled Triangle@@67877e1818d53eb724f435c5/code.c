#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(char j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}