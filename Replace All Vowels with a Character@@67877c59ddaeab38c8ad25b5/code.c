#include<stdio.h>
int main(){
    char str[50],r;
    scanf("%[^\n]s",str);
    getchar();
    scanf("%c",&r);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            printf("%c",r);
        }
        else{
            printf("%c",str[i]);
        }

    }
    return 0;
}