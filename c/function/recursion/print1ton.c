//using extra parameter
void count(int x, int n){
    if(x>n){return;} //base case
    printf("%d\n", x); //kaam
    count(x+1,n); //call
}
#include<stdio.h>
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
    count(1,n);
    return 0;
} 

//without using extra parameter
#include<stdio.h>
int count(int n){
    if(n == 0){return;} //base case
    count(n-1); //call
    printf("%d\n", n); //kaam
}
#include<stdio.h>
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
    count(n);
    return 0;
}