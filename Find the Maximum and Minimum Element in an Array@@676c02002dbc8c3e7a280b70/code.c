#include<stdio.h>
int main(){
    int arr[];
    int N,ma,mi;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(ma>arr[i]){
            ma=arr[i];
        }
        else if(mi<arr[i]){
            mi=arr[i];
    }
    }
    printf("%d ",mi);
    printf("%d ",ma);
    return 0;
}