#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,k,j,mii=0,min=0;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                mii = min;
                min = arr[j];
            }
        }
    }
    if(mii>min){
        printf("%d",mii);
    }
    else{
        printf{"-1"};
    }
}