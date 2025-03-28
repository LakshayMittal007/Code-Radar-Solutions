#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,l;
    int max,min;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=0;i<n;i++){
        if(max > arr[i]){
            max == arr[i];
        }
    }
    min = arr[0];
    for(i=0;i<n;i++){
        if((min > arr[i])&&arr[i]<max){
            min = arr[i];
        }
    }
    printf("%d",min);
}