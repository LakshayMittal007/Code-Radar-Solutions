#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    float av;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    av=(a+b+c)/3.0;
    printf("Average: %.2f",av);
    return 0;
}