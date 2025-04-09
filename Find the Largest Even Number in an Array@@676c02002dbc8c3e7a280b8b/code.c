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
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] > max && arr[i]%2 ==0){
            max = arr[i];
        }
    }
    if(max % 2==0){
        printf("%d",max);}
    else{
        printf("-1");
    }
    return 0;
}