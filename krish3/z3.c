#include<stdio.h>

int main (){
    int user;

    printf("Enter a raw number :");
    scanf("%d",&user);

    for (int row = 1; row <=user + 1; row++)
    {
        for (int col = user + 1; col >=row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}