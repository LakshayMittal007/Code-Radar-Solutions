#include<stdio.h>
int main(){
    char str[100];
    int i,j,k=0,l=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        for(j=i;j>0;j--){
            if(str[i]==str[j]){
                k++;
            }
        }
        if(k==0){
            printf("%c",str[i]);
        }
        else{
            continue;
        }
        k=0;
    }
}