#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int l=0,k=0,i;
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;i<l;i++){
        if(str[i]=='0'||str[i]=='1'){
            k++;
        }
    }
    if(k==l){
        printf("Yes");
    }
    else{
        printf("No");
    }
}