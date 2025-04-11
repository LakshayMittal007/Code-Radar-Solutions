#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    scanf("%s",str);
    int i,j,k,l=0,len=0;
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    if(l!=len){
        printf("No");
        return 0;
    }
}