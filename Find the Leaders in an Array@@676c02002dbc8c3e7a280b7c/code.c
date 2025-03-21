#include<stdio.h>
int main(){
    int n;
    int i,k,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                k++;
            }
        }
        if(k==n-i){
            printf("%d ",arr[i]);
        }
        else if(i==n-1){
            printf("%d",arr[n-1]);
        }
    }
    return 0;
}