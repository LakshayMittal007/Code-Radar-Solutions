#include<stdio.h>
int main(){
    int n,i,next,j,k,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }
    printf("-1");
    return 0;
}