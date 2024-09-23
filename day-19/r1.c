#include<stdio.h>

int main(){
    int user;

    printf("enter the any number :");
    scanf("%d",&user);

    int box[user];

    for (int i = 0; i < user; i++)
    {
        printf("box[%d]",i);
        scanf("%d",&box[i]);
    }
    for (int i = 0; i < user; i++)
    {
        if (box[i] < 0)
        {
            printf("%d ", box[i]);
        }
        
    
    }
    
}