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
    max = -100;
    for(i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    min = -100;
    for(i=0;i<n;i++){
        if((min < arr[i])&&arr[i] < max){
            min = arr[i];
        }
    }
    printf("%d",min);
}