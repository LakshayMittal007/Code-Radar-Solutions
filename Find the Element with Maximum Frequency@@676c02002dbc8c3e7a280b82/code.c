#include<stdio.h>
int main(){
    int n,i,j,l,m=0,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                l++;
            }
        }
        if(l>m){
            m=l;
            a = str[i];
        }
        l=0;
    }
    printf("%d",a);
}