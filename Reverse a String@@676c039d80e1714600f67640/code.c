#include<stdio.h>
#include<string.h>
int main(){
    char a[50],rev[50];
    scanf("%s",&a);
    strcpy(rev , a);
    strrev(rev);
    printf("%s",rev);
    return 0;
}