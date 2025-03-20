#include<stdio.h>
int main(){
    char str[50];
    int i,j,k;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]==' '){
            printf("%c",str[i]);
        }
    }
    return 0;
}