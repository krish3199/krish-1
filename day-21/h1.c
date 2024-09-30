#include<stdio.h>

int sum(){
    int janvi ,sum=0;
    printf("enter the size");
    scanf("%d",&janvi);

    int box[janvi];
    for (int  i = 0; i < janvi; i++)
    {
        printf("box[%d] = ",i);
        scanf("%d",&box[i]);
        sum+= box[i];
    }
    
    printf("sum = %d",sum);
}

int main(){
    sum();
}