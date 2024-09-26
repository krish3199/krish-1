#include<stdio.h>

#include<stdio.h>

int caluclator(){
    printf("Press 1 for +");
    printf("Press 2 for -");
    printf("Press 3 for *");
    printf("Press 4 for /");
    printf("Press 5 for |");

    int user,jiya,riya;
    printf("Enter your like number");
    scanf("%d",&user);

    printf("Enter your first number");
    scanf("%d",jiya);

    printf("Enter your second number");
    scanf("%d",&riya);

    switch (user)
    {
    case 1:
        printf("sum = %d",(jiya+riya));
        break;
    case 2:
        printf("division = %d",(jiya-riya));
        break;
    case 3:
        printf("multipication = %d",(jiya*riya));
        break;
    case 4:
        printf("divided = %d",(jiya/riya));
        break;
    case 5:
        printf("modul = %d",(jiya|riya));
        break;
    
    
    default:
    printf("invalid number");
        break;
    }


}

int main(){
    caluclator();
}