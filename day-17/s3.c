#include<stdio.h>

int main(){

    int size;
    printf("enter the number :");
    scanf("%d",&size);

    int box[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value box[%d] :",i);
        scanf("%d",&box[i]);
    }
    printf(" ---------------------------------------------\n");
    int box2[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value box[%d]:",i);
        scanf("%d",&box2[i]);
    }
    
    int box3[size];
    for (int i = 0; i < size; i++)
    {
        box3[i] = box[i] + box2[i];
        printf("sum : %d\n",box3[i]);
    }
}