#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,k,l=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                l++;
            }
        }
        if(l==n-i-1){
            printf("%d ",arr[i]);
        }
        l=0;
    }
    printf("%d",arr[n-1]);

}