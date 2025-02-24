#include<stdio.h>

int main() {
    int a, b;
    char c;

    // Taking input for two integers and the operator
    scanf("%d %d %c", &a, &b, &c);

    // Checking the operator and performing the corresponding operation
    if (c == '+') {
        printf("%d", a + b);
    } else if (c == '-') {
        printf("%d", a - b);
    } else if (c == '/') {
        // Check for division by zero
        if (b == 0) {
            printf("Error: Division by zero is not allowed.");
        } else {
            printf("%d", a / b);  // Perform integer division
        }
    } else if (c == '*') {
        printf("%d", a * b);
    } else {
        // Handle invalid operator
        printf("Error: Invalid operator.");
    }

    return 0;
}
