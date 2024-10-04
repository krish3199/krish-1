#include<stdio.h>

int main (){
    int user;

    printf("Enter a raw number :");
    scanf("%d",&user);

    for (int row = user + 1; row >= + 1; row--)
    {
        for (int col = row ; col >=1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}