#include<stdio.h>

int main(){
    float p,r,n;
    printf("enter your prize");
    scanf("%f",&p);
    printf("enter your rate");
    scanf("%f",&r);
    printf("enter your month");
    scanf("%f",&n);


    printf("%f",p*r*n/100);

    return 0;
}