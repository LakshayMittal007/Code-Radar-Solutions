#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(i>0&&i<N-1){
            if((arr[i]<arr[i+1])&&(arr[i+1]>arr[i+2])){
                k=arr[i+1];
                break;
                }
        }
        else if()
        }

    }
