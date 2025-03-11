#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int i,j,k;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        for(j=1;j<arr[i];j++){
            if(arr[i]%j==0){
                k++;
            }
        }
    }
}