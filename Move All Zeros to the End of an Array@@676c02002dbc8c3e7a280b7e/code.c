#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
            j++;
        }
        else{
            printf("%d",arr[i]);
        }
    }
    for(i=0;i<j;i++){
        printf("0");
    }
}