#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int i,j=0;
    while(str[i]!='\0'){
        j++;
    }
    printf("%d",j);
}