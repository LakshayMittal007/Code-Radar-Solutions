#include<stdio.h>
int main(){
    char str[50];
    char n;
    int i=0,j=o,l=0,k=0;
    scanf("%[^\n]s",str);
    scanf("%c",&n);
    while(str[i]!='\0'){
        i++;
        l++;
    }
    for(j=0;j<l;j++){
        if(str[j]==n){
            k++;
        }
    }
    printf("%d",k);
}