#include<stdio.h>
int bubbleSort(arrr, num){
    int num;
    int arrr[num];
    int i;
    for(i=0;i<num;i++){
        for(int j=i;j<n;j++){
            if(arrr[i]>=arrr[j]){
                int a = arrr[i];
                arrr[i] = arrr[j];
                arrr[j] = a;
            }

        }
    }
    return 0;
}
int printArray(ar, no){
    int no;
    int ar[n];
    for(int i=0;i<no;i++){
        printf("%d ",ar[i]);
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
