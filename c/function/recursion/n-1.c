#include<stdio.h>
int count(int n){
    if(n == 0){return;} //base case
    printf("%d\n", n); //kaam
    count(n-1); //call
}
#include<stdio.h>
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
    count(n);
    return 0;
}