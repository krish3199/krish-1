#include <stdio.h>

int main (){

   int user;

   printf("enter your any number");
   scanf("%d",&user);
   for (int start = 1; start <= 10; start++)
   {
    printf("%d x %d = %d/n",user,start,(user*start));
   }
   

}