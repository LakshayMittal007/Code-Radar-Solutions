#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",str);
    int i,n,j,k=0,l=0;
    while(str[l]!='\0'){
        l++;
    }
    for(i=0;i<l;i++){
        for(j = 0; j < l; j++){
            if(i != j && str[i] == str[j]){
                k++;
            }
        }
        if(k==0){
            printf("%c",str[i]);
            return 0;
        }
        k=0;
    }
    printf("-");
}