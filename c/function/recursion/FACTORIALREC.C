
//recursive way 
#include<stdio.h>
int fact(int n){
  if(n < 0){
    printf("Error: Factorial of negative number doesn't exist.");
    return -1;}
if(n == 1 || n == 0){
    return 1;
}
return n *fact(n - 1);
 
}
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
  printf("%d",fact(n));
    return 0;
}

