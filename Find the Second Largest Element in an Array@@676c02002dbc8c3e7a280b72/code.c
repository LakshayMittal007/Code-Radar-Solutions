#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N],i,m,max;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    m=arr[0];
    for(i=0;i<N;i++){
        if(m<arr[i]&&m<max){
            m=arr[i];
            printf("%d",m);
            return 0;
        }
    }
    printf("%d", m);
}