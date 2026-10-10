#include<stdio.h>
int main() {
    int n,prime=1;
    printf("Enter a number: ");
    scanf("%d", &n);

   if(n<=1) {
    prime=0;
   }else {
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            prime=0;
            break;
        }
    }
   }
   if(prime) {
    printf("It is a prime number");
   }else {
    printf("It is not a prime number");
   }
   return 0;
}