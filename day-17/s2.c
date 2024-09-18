// #include<stdio.h>

// int main(){
//      int size;
//      float sum;
//      printf(" enter your size : ");
//      scanf("%d",&size);
//      int box[size];

//     for (int i  = 0; i < size; i++)
//     {
//         printf("enter your value : ");
//         scanf("%d",&box[i]);
//     }
//     for (int i = 0; i < size; i++)
//         sum+=box[i];
//     {
//         printf("sum = %f",sum/size);
//     }
    
    
// }

// #include<stdio.h>

// int main(){
//      int size;
//      printf(" enter your size : ");
//      scanf("%d",&size);
//      int box[size];

//     for (int i  = 0; i < size; i++)
//     {
//         printf("enter your value : ");
//         scanf("%d",&box[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("value : %d \t",box[i]);
//     }
    
    
// }

#include<stdio.h>

int main(){

    int size;
    float sum;
    printf("enter the number :");
    scanf("%d",&size);
    int box[size];


    for (int i = 0; i < size; i++)
    {
        printf("enter the value box[%d]:",i);
        scanf("%d",&box[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum+=box[i];
    }
    
    printf("avg : %f",sum/size);
    
}