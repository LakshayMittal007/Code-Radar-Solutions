#include<stdio.h>
int main(){
    int n, arr[n];
    int k,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(n<k){
        j = k-n;
    }
    else{
        j = n-k;
    }
    for(i=j;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<j;i++){
        printf("%d ",arr[i]);
    }
}