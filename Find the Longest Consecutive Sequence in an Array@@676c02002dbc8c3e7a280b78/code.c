#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,k=0;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<n-1;i++){
        for(j=i;j<n-1;j++){
            if((arr[j+1])-1 == arr[j]){
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