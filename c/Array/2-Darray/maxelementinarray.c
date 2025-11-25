
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[3][3] = {11,14,15,18,25,19,32,35,62,};
//    int mx = INT_MIN; // sabse chota numnber
//     // printing all element of an array
//     for(int i =0;i<3;i++){
//         for(int j =0;j<3;j++){
//             if(mx<arr[i][j]){
//             mx = arr[i][j];
//         }
//         } 
        
//     }   
//     printf("\nmax of all elements: %d\n", mx);
// }

//minimum element in 2-D array

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3] = {11,14,-15,18,25,19,32,35,62,};
   int mx = INT_MAX; // sabse chota numnber
    // printing all element of an array
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if(mx>arr[i][j]){
            mx = arr[i][j];
        }
        } 
        
    }   
    printf("\nmax of all elements: %d\n", mx);
}