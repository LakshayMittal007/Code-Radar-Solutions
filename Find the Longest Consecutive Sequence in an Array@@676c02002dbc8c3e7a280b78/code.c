#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,k=0;
    int arr[n];
    int max=1;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(arr[i]>arr[i+1]){
                int a = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = a;
            }
        }
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i+1]-1 == arr[i]){
                k++;
            }
            else{
                break;
            }
        }
        if(max<=k){
            max = k;
        }
        k=0;
    }
    printf("%d",max);
}