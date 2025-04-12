// #include<stdio.h>
// int main(){
//     char str[50];
//     char n;
//     char a;
//     scanf("%[^\n]s",str);
//     getchar();
//     scanf("%c\n",&n);
//     scanf("%c",&a);
//     int i=0,j=0,k=0,l=0,m=0;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]==n){
//             str[i]=a;
//         }
//     }
//     for(i=0;str[i]!='\0';i++){
//         printf("%c",str[i]);
//     }
//     return 0;
// }
#include<stdio.h>
#include <string.h>
int main(){
    int i,n;
    char name[50];
    char n;
    char a;
    scanf("%[^\n]s",name);
    getchar();
    len=strlen(name);
    scanf("%c\n",&n);
    scanf("%c",&a);
    for (i=0;i<len;i++){
        if (name[i]=='n'){
            name[i]='a';
        }
    }
    for (i=0;i<len;i++){
        printf("%c",name[i]);
    }
}