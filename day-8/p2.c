#include <stdio.h>

int main() {
    int krish,sum = 1;
    

    printf("Enter any number: ");
    scanf("%d", &krish);

    for (int start = 1; start <= krish; start++) {
        sum *= start; 
    }

    printf("The sum of all numbers: %d\n", sum);

}
