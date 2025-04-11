#include<stdio.h>
int main(){
    char str[100];
    char st[100];
    scanf("%s\n",str);
    scanf("%s",st);
    int i,j,k=0,l=0,len=0;
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;st[i]!='\0';i++){
        len++;
    }
    for(j=0;j<l-1;j++){
        for(i=0;i<l-j-1;i++){
            if(str[i]>str[i+1]){
                char a = str[i+1];
                str[i+1] = str[i];
                str[i] = a;
            }

        }
    }
    for(j=0;j<len-1;j++){
        for(i=0;i<len-j-1;i++){
            if(st[i]>st[i+1]){
                char a = st[i+1];
                st[i+1] = st[i];
                st[i] = a;
            }

        }
    }
    if(l!=len){
        printf("No");
        return 0;
    }
    else{
        for(i=0;i<l;i++){
            if(str[i]==st[i]){
                k++;
            }
        }
    }
    if(k==l){
        printf("Yes");
    }
}