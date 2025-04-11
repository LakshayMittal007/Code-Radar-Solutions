#include<stdio.h>
int main(){
    char str[100];
    int i,j,k=0,l=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        k=0;
        for(j=0;j<i;j++){
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
    }
}