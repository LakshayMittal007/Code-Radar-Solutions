#include<stdio.h>
int main(){
    int n,i,j,k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            k=k+arr[j];
        }
        printf("%d ",k);
        k=0;
    }
}