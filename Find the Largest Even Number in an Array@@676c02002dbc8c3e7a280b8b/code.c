#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,k;
    int max;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[i];
    for(i=0;i<n;i++){
        if(arr[i] > max && arr[i]%2 ==0){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}