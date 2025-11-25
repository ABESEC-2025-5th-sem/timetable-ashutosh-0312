#include<stdio.h>
void oddeven(int a){
    if(a%2==0){
        printf("%d is even\n",a);
    }else{
        printf("%d is odd\n",a);
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    oddeven(a);
    return 0;
}