#include <stdio.h>

int main() {
    float first_number, second_number;

    printf("Enter a value of the first number: ");
    scanf("%f", &first_number);
    
    printf("Enter a value of the second number: ");
    scanf("%f", &second_number);

    if (first_number < second_number) {
        printf("The minimum value is: %.2f\n", first_number);
    } else {
        printf("The minimum value is: %.2f\n", second_number);
    }

}