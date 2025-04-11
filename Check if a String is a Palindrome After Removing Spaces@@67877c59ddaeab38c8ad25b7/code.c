#include<stdio.h>
int main(){
    char str[100];
    char st[100];
    int i,j=0,k=0,l=0,len=0;
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
        printf("%c",st[j]);
        // if(st[j]==st[len-j-1]){
        //     k++;
        // }
    }
    // printf("%d",k);
    // if((len-1)/2 == k){
    //     printf("Yes");
    // }
    // else{
    //     printf("No");
    // }
    return 0;
}