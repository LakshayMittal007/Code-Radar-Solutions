#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int l;
    scanf("%s",&a);
    while(a[l] != '0'){
        l++;
    }
    for(int i= l-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}