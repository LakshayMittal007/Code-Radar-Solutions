#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int i=0,j=0;
    while(str[i]!='\0'){
        i++;
        j++;
    }
    printf("%d",j);
}