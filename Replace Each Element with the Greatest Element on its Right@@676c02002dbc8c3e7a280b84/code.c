#include<stdio.h>
int main(){
    int n,i,max,j,k,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        max = -1;  
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                if (arr[j] > max) {
                    max = arr[j]; 
                }
            }
        }
        printf("%d ", max);
    }
    printf("-1");
    return 0;
}