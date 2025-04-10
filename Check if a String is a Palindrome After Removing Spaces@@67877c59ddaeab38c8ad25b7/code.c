#include<stdio.h>
int main(){
    char str[100];
    char st[100];
    int i,j,k=0,l=0,len=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;i<l;i++){
        if(str[i]!=' '){
            st[j]==str[i];
            j++;
            len++;
        }
        else{
            continue;
        }
    }
    for(j=0;j<len;j++){
        if(st[j]==str[len-j]){
            k++;
        }
    }
    if(len/2 - 1 == k){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;

}