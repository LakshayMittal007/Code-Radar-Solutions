#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int i,j,m=0,k=0,p=0;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(m=0;m<N;m++){
        for(j=1;j<=arr[m];j++){
            if(arr[m]%j==0){
                k++;
            }
            if(k==2){
                p++;
            }
            }
        }
    printf("%d",p);
    return 0;
}