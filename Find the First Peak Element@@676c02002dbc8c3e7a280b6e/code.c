#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
            if(max>arr[i+1] || max==arr[N-1]){
                printf("%d",max);
                return 0;
            }
        }
    }
    printf("-1");
}