#include<stdio.h>

int string(){
    char user[100];
    int length = 0;

    printf("Enter any string: ");
    scanf("%s",&user);

    for (int i = 0; i <= user[length]; i++)
    {
        length = i;
    }
    printf("Length is: %d",length);
}

int main(){
    string();
}