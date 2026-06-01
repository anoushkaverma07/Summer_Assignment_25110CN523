#include <stdio.h>
int main() {
    int n, fact=1, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } 
    else if (n == 0) {
        printf("Factorial of 0 = 1");
    }
    else {
        for(i=1; i<=n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }
}