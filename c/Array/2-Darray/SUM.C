// #include<stdio.h>
// int main(){
//     int arr[2][2];
//     int sum = 0;
//     // taking input from user
//     for(int i =0;i<2;i++){
//         for(int j = 0; j < 2; j++){
//             printf("Enter element at position [%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
    
//     // printing all element of an array
//     for(int i =0;i<2;i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", arr[i][j]);
//             sum += arr[i][j];
//         }
//     }
//     printf("\nSum of all elements: %d\n", sum);}

// product
#include<stdio.h>
int main(){
    int arr[2][2];
    int product  = 1;
    // taking input from user
    for(int i =0;i<2;i++){
        for(int j = 0; j < 2; j++){
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // printing all element of an array
    for(int i =0;i<2;i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
            product *= arr[i][j];
        }
    }
    printf("\nproduct of all elements: %d\n", product);}