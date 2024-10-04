#include<stdio.h>

int main(){
    int user,sum=1;

    printf("Enter a any number :");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
        sum *= i;
    }
    printf("Factoril of %d if : %d",user,sum);
}