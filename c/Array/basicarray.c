#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 25};
    printf("%d\n", arr[2]);
    // updating the element
    arr[2] = 10;
    printf("%d\n", arr[2]);

    // taking input from user
    scanf("%d", &arr[5]);
    // or using a loop
    for(int i =0;i<=5;i++){
        scanf("%d", &arr[i]);
    }

     
    // printing all element of an array
    for(int i =0;i<=5;i++){
        printf("%d ", arr[i]);

        // to find size of an array
        printf("%d\n", sizeof(arr)/sizeof(arr[0])); 
    }   
}