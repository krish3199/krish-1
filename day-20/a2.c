#include<stdio.h>

int riya(){
    int yashvi;

    printf("enter your value : ");
    scanf("%d",&yashvi);

    if (yashvi % 3 == 0 &&  yashvi % 5 == 0)
    {
        printf(" <--------------Thish value is true------------------>\n");
    }
    
    else{
         printf("<--------------Thish value is false------------------>\n");

    }
    
       
    
}

int main(){
    for (int i = 1; i <=10; i++)
    {
        riya();
    }
    
}