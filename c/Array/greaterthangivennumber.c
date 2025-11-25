#include<stdio.h>
int main(){
    int arr[] = {1,2,44,12,15,18,2,3,5};
    int target = 4;
    int count = 0;
    for(int i =0;i<9;i++){
        if(arr[i]>target){
            count = count + 1;     
        }
    }
 
    
    // printing all element of an array
  
        printf("%d ", count);
}