#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a = %d and b = %d\n", a, b);

}