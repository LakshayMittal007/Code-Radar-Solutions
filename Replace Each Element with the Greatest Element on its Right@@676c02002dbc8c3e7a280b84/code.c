#include<stdio.h>
int main(){
    int n,i,max,j,k,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                max = arr[j];
                if(k<max){
                    k=max;
                }
            }
        }
        printf("%d ",k);
        k=0;
    }
    printf("-1");
}