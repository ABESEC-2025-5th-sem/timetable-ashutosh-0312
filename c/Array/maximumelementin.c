// #include<stdio.h>
// int main(){
//     int arr[5] = {74,25,98,10,4};
//     arr[0] = 0;   
//     // printing all element of an array
//     for(int i =0;i<5;i++){
//         if(arr[0]<arr[i]){
//             arr[0] = arr[i];
//         }
        
//     }   
//     printf("\nmax of all elements: %d\n", arr[0]);
// }


//formax element another method
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {-7,-8,-9,-4,-5};
   int mx = INT_MIN; 
    // printing all element of an array
    for(int i =0;i<5;i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
        
    }   
    printf("\nmax of all elements: %d\n", mx);
}