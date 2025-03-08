#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int i,j;
    while(str[i]!='\0'){
        j++;
    }
    printf("%d",j);
}