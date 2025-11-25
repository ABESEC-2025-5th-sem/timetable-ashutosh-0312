#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Using 'unsigned long long' to handle large factorials

    printf("Enter a positive integer (up to 25): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 25) {
        printf("Sorry, the input exceeds 25. Factorial calculation is restricted to values up to 25.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i; // Multiply each number from 1 to n
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
