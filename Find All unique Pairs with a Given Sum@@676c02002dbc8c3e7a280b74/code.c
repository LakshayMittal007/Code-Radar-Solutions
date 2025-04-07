#include <stdio.h>
int main(){
    int i,j,n,c=0,k,l,m,t;
    scanf("%d" ,&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);        
    }
    scanf("%d" ,&t);
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
        if (arr[i]+arr[j]==t){
            if (arr[i]!=arr[j]){
            printf("%d %d\n",arr[i] , arr[j]);
            }
            else{
              printf("%d %d\n",arr[i] , arr[j]);
              return 0;
            }
            
        }
    }
}
}