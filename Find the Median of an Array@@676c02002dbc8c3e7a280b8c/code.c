#include <stdio.h>
int main(){
    int i,j,n,c,k,l,m;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);    
        
    }
    for(i=0;i<n;i++){
        if (n%2==1){
            m=n/2 ;
            c=arr[m];
        }
        else{j=n/2;
        k=arr[j-1] +arr[j] ;
        c=k/2;
        }
    }
    printf("%d",c);
    
    

}