#include<stdio.h>

int main(){
    int n,number;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0;i<n;i++){
        number = arr[i]*arr[i];
        printf("%d ", number);}
}