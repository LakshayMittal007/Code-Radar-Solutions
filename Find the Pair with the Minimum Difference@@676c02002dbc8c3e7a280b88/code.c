#include<stdio.h>
int main(){
    int n,i,j;
    int min = 1000;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int a = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = a;
            }

        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                if(arr[i]-arr[j] <= min){
                    min = arr[i] - arr[j];
                }
            }
            else{
                if(arr[j] - arr[i] < min){
                    min = arr[j] - arr[i];
                }
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                if(arr[i]-arr[j]==min){
                    printf("%d %d",arr[j],arr[i]);
                    return 0;
                }
            }
            else{
                if(arr[j]-arr[i]==min){
                    printf("%d %d",arr[i],arr[j]);
                    return 0;
                }
            }
        }
    }
    printf("-1");
}