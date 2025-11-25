#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/4;
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i =0;i<n;i++){
        if(first<arr[i]){
            first = arr[i];
        }
    }
        printf("%d ", first);
       for(int i =0;i<n;i++){
        if(second<arr[i] && arr[i] != first){
            second = arr[i];
        }
    }
    printf("%d ", second);
}