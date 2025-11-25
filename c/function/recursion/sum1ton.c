    #include<stdio.h>
void sum1ton(int n,int sum){
    if(n == 0){
        printf("%d",sum);
    }//base case
    sum1ton(n-1,sum+n); //call
}
#include<stdio.h>
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
    sum1ton(n,0);
    return 0; 
}