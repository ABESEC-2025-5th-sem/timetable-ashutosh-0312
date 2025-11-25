#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {74,25,98,10,4};
   int mx = INT_MAX;   
    // printing all element of an array
    for(int i =0;i<5;i++){
        if(mx>arr[i]){
            mx = arr[i];
        }
        
    }   
    printf("\nmax of all elements: %d\n", mx);
}