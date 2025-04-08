#include<stdio.h>
int main(){
    int i,k,j=0,n;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] > k){
            j++;
        }
    }
    printf("%d",j);
}