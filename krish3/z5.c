#include <stdio.h>

int main(){
  
  int user , new ;
  int even = 0, odd = 0 ;

  printf("enter the number  : ");
  scanf("%d",&user);

   while (user != 0)
   {
    new = user% 10;
    if (new %2 == 0)
    {
        even++;
    }
    else{
        odd++;
    }
    user = user / 10 ;
   }
   
    printf("even number %d \n",even);
    printf("odd number %d ",odd);
}