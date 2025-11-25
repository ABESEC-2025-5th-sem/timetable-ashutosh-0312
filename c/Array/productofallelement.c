#include<stdio.h>
int main(){
    int arr[5];
    int product = 1;
    // taking input from user
    for(int i =0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    
    // printing all element of an array
    for(int i =0;i<5;i++){
        printf("%d ", arr[i]);
        product *= arr[i];
    }   
    printf("\nproduct of all elements: %d\n", product);
}