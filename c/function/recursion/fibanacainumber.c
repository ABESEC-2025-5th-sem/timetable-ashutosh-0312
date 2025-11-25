
//recursive way 
#include<stdio.h>
int fibo(int n){
if(n == 1 || n == 2  ){
    return 1;
}
 return fibo(n-1) + fibo(n - 2);
}
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
  printf("%d",fibo(n));
    return 0;
}

// to print upto n tern
#include<stdio.h>
int fibo(int n){
if(n == 1 || n == 2  ){
    return 1;
}
 return fibo(n-1) + fibo(n - 2);
}
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
      printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibo(i));
    }

    return 0;
}

