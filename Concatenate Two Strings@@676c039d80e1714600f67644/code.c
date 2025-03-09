#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char strr[50];
    scanf("%[^\n]s",str);
    scanf("%[^\n]s",strr);
    int i=0,j=0,k=0,l=0,le=0,m=0;
    while(str[k]!='\0'){
        printf("%c",str[k]);
        k++;
    }
    while(strr[m]!='\0'){
        printf("%c",strr[m]);
        m++;
    }
    return 0;
}