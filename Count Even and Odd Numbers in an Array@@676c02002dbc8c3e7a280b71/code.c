#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N],o=0,e=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d %d",e,o);
    return 0;

}