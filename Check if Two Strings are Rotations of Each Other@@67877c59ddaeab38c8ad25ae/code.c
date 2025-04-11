#include<stdio.h>
int main(){
    char str[100];
    char st[100];
    char s[100];
    scanf("%s\n",str);
    scanf("%s",st);
    int i,j,m=0,k=0,l=0,len=0;
    for(i=0;str[i]!='\0';i++){
        l++;
    }
    for(i=0;st[i]!='\0';i++){
        len++;
    }
    if(l!=len){
        printf("No");
        return 0;
    }
    for(j=0;j<l;j++){
        if(str[0]==st[j]){
            break;
        }
    }
    if(str[1]!=st[j+1]){
        printf("No");
        return 0;
    }

    
    for(i=j;i<l;i++){
        str[i] = s[k];
        k++;
    }
    for(i=0;i<j;i++){
        str[i] = s[k];
        k++;
    }
    for(i=0;i<l;i++){
        if(st[i] == s[i]){
            m++;
        }
    }
    printf("%d",m);
    if(m==l){
        printf("Yes");
    }
    else{printf("No");}

}