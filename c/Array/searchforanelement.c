#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int x = 4;
    bool flag = false;
    for(int i =0;i<7;i++){
        if(arr[i] == x){
            flag = true;
            break;
        } 
        }
    if(flag == true){
        printf("%d found",x);
    }
    else{
        printf("%d not found",x);
    }

 
    
    
     
}