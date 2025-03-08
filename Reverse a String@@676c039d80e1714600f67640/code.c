#include<stdio.h>
#include<string.h>
int main(){
    char a[100],rev[100];
    scanf("%s",&a);
    strcpy(rev , a);
    strrev(rev);
    printf("%s",rev);
    return 0;
}