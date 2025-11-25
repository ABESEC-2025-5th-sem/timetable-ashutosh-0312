// #include<stdio.h>
// #include<math.h>    
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int npr(int n,int r){
//     return fact(n)/fact(n-r);
// }
// int main(){
//     int n,r;
//     printf("Enter n and r: ");
//     scanf("%d %d",&n,&r);
//     int ans = npr(n,r);
//     printf("Permutation of %d and %d is %d\n",n,r,ans);
//     return 0;
// }

#include<stdio.h>
#include<math.h>    
int fact(int n){
    if(n==0 || n==1) return 1; // Base case for recursion
    else
    return n*fact(n-1);
    }


int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    int ans = fact(n);
    printf("Permutation of %d \n",ans);
    return 0;
}