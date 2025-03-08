#include<stdio.h>
int main(){
    int str[100];
    scanf("%[^\n]s",&str);
    int i=0,j=0,l=0,k=1;
    while(str[i]!='\0'){
        l++;
        j++;
    }
    for(i=0;i<l;i++){
        if(str[i]==' ');
        k++;
    }
    printf("%d",k);
    return 0;
}