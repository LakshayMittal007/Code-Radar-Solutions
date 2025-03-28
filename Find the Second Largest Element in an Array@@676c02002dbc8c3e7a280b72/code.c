#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j,l;
    int max,min;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = j;
    min = j;
    for(i=0;i<n;i++){
        if(max < arr[i]){
            min = max;
            max = arr[i]; 
        }
    }
    if(min = j){
        printf("-1");
    }
    else{printf("%d",min);}
}