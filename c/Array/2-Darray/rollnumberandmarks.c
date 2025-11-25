//row wise print
// #include<stdio.h>
// int main(){
// int arr[4][2] = {{50,29},{52,30},{63,27},{67,28}};
// for(int i = 0; i < 4; i++) {
//     for(int j = 0; j < 2; j++) {
//         printf("%d ", arr[i][j]);
//     }
//     printf("\n");
// }
// } 
//column wise print
//transpose of a matrix
// #include<stdio.h>
// int main(){
// int arr[3][3] = {{50,29,25},{52,30,26},{63,27,22}};
// for(int j = 0; j < 3; j++) {
//     for(int i = 0; i < 3; i++) {
//         printf("%d ", arr[i][j]);
//     }
//     printf("\n");
// }
// } 

#include<stdio.h>
int main(){
int arr[5][5];
for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        arr[i][j] = 10;
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
} 