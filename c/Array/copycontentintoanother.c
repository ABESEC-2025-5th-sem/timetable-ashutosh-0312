#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/4;
    int brr[n];
    for(int i =0;i<7;i++){
          brr[i] = arr[n-1-i]; 
        }

        for(int i =0;i<n;i++){
            printf("%d ", brr[i]);
        }
    printf("\n");
      
}