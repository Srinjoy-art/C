#include<stdio.h>
int main() {
    int num,sum=0,digit;
    printf("Enter a number:");
    scanf("%d", &num);

    int temp=num;
    if(temp<0)temp=-temp;

    while(temp>0){
    digit=temp%10;
    sum+=digit;
    temp/=10;
    }
    printf("Sum of digits is:%d", sum);
    return 0;
}