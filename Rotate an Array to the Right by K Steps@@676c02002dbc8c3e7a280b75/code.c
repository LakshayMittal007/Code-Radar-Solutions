#include<stdio.h>
int main(){
    int n, arr[n];
    int k,i,j;
    scanf("%d",&n);
    if(n<k){
        k = k-n;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-k;i++){
        printf("%d ",arr[i]);
    }
}