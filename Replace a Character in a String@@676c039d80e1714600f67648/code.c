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
#include <stdio.h>
#include <string.h>
int i,j,n;
char name[100];
char ch;
scanf("%s\n",name);
getchar();
scanf("%c\n",&ch);