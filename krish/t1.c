#include<stdio.h>

int main(){
    int user,a,b;

    printf("Addition\n");
    printf("Subtraction\n");
    printf("Multiplication\n");
    printf("Division\n");

    printf("Enter any  number : ");
    scanf("%d",&user);

    printf("Enter any  first number : ");
    scanf("%d",&a);

    printf("Enter any  second number : ");
    scanf("%d",&b);

    switch (user)
    {
    case 1:
        printf("Addition : %d = ",(a+b));
        break;
    case 2:
        printf("Subtraction : %d = ",(a-b));
        break;
    case 3:
        printf("Multiplication : %d = ",(a*b));
        break;
    case 4:
        printf("Division : %f = ",((float)a/b));
        break;
    
    default:

    printf("invalid value :");
        break;
    }


}