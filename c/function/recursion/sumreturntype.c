// simple way
#include<stdio.h>
int sum(int n){
int s = 0;
for(int i = 1; i <= n; i++){
    s += i;
  }
    return s;
}
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
  printf("%d",sum(n));
    return 0;
}

//recursive way 
#include<stdio.h>
int sum(int n){
if(n == 1){
    return 1;
}
int recans = n + sum(n - 1);
return recans;
}
int main(){
    int n ;
    printf("Enter n : ");
    scanf("%d", &n);
  printf("%d",sum(n));
    return 0;
}

