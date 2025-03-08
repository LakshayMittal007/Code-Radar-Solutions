#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char strr[50];
    scanf("%[^\n]s\n",str);
    scanf("%[^\n]s",strr);
    int i=0,j=0,k=0,l=0,le=0,m=0;
    while(str[k]!='\0'){
        k++;
        l++;
    }
    while(strr[m]!='\0'){
        m++;
        le++;
    }
    for(i=0;i<l;i++){
        printf("%c",str[i]);
    }
    for(int p=0;p<le;p++){
        printf("%c",strr[p]);
    }
    return 0;
}