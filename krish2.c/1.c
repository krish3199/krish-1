#include<stdio.h>

int main(){
    
    int user,sum=0;

    printf("Enter your any number :");
    scanf("%d",&user);
    printf("\n");

    for (int a = 1; a <= user; a++)
    {
        sum += a;
    }
    printf("Sum of digits: %d",sum);
}




