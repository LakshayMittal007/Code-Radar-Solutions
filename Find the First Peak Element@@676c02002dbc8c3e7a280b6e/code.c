#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        if(arr[i]<arr[i+1]){
            printf("%d",arr[i+1]);
            break;
        }
        
    }
}