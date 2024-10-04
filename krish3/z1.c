#include<stdio.h>

int main(){
    
    int user,sum=0;

    printf("Enter your any number :");
    scanf("%d",&user);
    printf("\n");

    for (int a = user; a > 0; a /= 10)
    {
        sum += a % 10;
    }
    printf("Sum of digits: %d",sum);
}




