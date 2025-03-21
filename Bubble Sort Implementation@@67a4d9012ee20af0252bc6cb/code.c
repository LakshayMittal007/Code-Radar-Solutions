#include<stdio.h>
int bubbleSort(arr, n){
    int n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>=arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }

        }
    }
    return 0;
}
int printArray(arr, n){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;

}
