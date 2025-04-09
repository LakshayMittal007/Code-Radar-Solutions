#include<stdio.h>
int main(){
    int n, arr[n];
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&k);
    for(i=n-k;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n-k;i++){
        printf("%d\n",arr[i]);
    }

        
    return 0; 
}