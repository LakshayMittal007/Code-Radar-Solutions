#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char strr[50];
    scanf("%s\n",str);
    scanf("%s\n",strr);
    int i,j,k,l,le,m;
    while(str[k]!='\0'){
        k++;
        l++;
    }
    for(i=0;i<l;i++){
        printf("%d",str[i]);
    }
    while(strr[m]!='\0'){
        m++;
        le++;
    }
    for(int p=0;p<le;p++){
        printf("%d",strr[p]);
    }
    return 0;
}