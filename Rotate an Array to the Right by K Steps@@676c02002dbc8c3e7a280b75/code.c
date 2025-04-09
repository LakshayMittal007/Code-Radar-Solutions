#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k,i,j;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(n < k){
        j = k - n - 1;
    }
    else{
        j = n - k;
    }
    for(i=j;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<j;i++){
        printf("%d ",arr[i]);
    }
}