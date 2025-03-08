#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int l=0,len,i,j=0,k;
    while(str[l]!='\0'){
        l++;
    }
    len = l/2;
    for(i=0;i<=len-1;i++){
        if(str[len-i]==str[len+i]){
            k++;
        }
        else{
            j++;
        }
    }
    if(j==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}