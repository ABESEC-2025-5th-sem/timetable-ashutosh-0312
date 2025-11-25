#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 4,3,2,1}; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        if (arr[i] != arr[j]) {
            printf("Not a palindrome\n");
            return 0; // Exit immediately if a mismatch is found
        }
        i++; 
        j--;
    }

    printf("Is a palindrome\n"); // If loop completes without mismatches
    return 0;
}