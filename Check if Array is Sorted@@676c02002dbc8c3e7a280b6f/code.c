#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int c=1;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++){
        if(arr[i]<arr[i+1]){
            c++;
        }
    }
    if(c==N){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;

}