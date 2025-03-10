#include<stdio.h>
int main(){
    int N,ma,mi;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(ma>=arr[i]){
            ma=arr[i];
        }
        else if(mi<=arr[i]){
            mi=arr[i];}
    }
    printf("%d ",ma);
    printf("%d ",mi);
    return 0;
}