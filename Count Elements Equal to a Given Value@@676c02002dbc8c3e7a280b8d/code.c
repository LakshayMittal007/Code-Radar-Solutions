#include<stdio.h>
int main(){
    int n,i,j=0;
    int arr[n],m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==m){
            j++;
        }
    }
    printf("%d",j);
    return 0;
}