#include<stdio.h>

int main (){
    int user;

    printf("Enter a raw number :");
    scanf("%d",&user);

    for (int row = user; row >=1; row--)
    {
        for (int col = user; col >=row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}