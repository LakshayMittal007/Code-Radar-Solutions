#include<stdio.h>
int main(){
    int n, arr[n];
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&k);
    for(int j=1;j<k;j++){
        int last = arr[n-1];
        for(int j = n-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
        }
        for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0; 
}