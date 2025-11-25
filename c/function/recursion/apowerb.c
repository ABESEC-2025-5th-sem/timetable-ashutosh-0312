
//recursive way 
#include<stdio.h>
int power(int a, int b){
if(b == 0)
    return 1;
if(a == 0)
    return 0;     
return a * power(a,b-1);

}
int main(){
    int a,b ;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b); 
  printf("%d",power(a,b));
    return 0;
}

  