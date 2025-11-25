#include<stdio.h>
int min(int x,int y){
    if(x<y)return x;
    else return y;
}
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d %d",&a,&b);
    int m = min(a,b);
    printf("Minimum of %d and %d is %d\n", a, b, m);
    return 0;
}