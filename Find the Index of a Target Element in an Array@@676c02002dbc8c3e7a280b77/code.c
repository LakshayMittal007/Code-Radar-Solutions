#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,k,l;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(j=0;j<n;j++){
        if(arr[j]==k){
            printf("%d",j);
            return 0;
        }
        else{printf("-1");}
    }
    

}