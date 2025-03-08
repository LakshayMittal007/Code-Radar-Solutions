#include<stdio.h>
int main(){
    char str[100];
    char a[50] = "aeiou";
    int l=0,len=0,i,j,k;
    while(str[l]!='0'){
        l++;
    }
    for(i=0;i<l;i++){
        for(j=0;j<5;j++){
            if(str[i]==a[j]){
                len++;
            }
        }
    }
    return 0;
}