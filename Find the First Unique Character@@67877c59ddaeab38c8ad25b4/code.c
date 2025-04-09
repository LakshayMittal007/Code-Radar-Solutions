#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",str);
    int i,n,j,k,l=0;
    while(str[l]!='\0'){
        l++;
    }
    for(i=0;i<l;i++){
        for(j=i+1;j<n;j++){
            if(str[i]==str[j]){
                k++;
            }
        }
        if(k==0){
            printf("%c",str[i]);
            return 0;
        }
    }
}