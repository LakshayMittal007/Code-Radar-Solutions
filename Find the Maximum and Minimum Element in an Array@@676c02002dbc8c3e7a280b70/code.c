#include<stdio.h>
int main(){
    int N,ma=0,mi=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(ma<=arr[i]){
            ma=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(mi>=arr[i]){
            mi=arr[i];}}
    printf("%d ",mi);
    printf("%d ",ma);
    return 0;
}