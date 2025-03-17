#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N],i;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int m=0;
    for(i=0;i<N;i++){
        if(m<arr[i]&&m<max){
            m=arr[i];
        }
    }
    return 0;
}