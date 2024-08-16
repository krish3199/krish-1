#include <stdio.h>

int main() {
    int x, y;
    printf("Enter values for x and y: ");
    scanf("%d %d", &x, &y);

    int result = (x + y) * (x + y) * (x + y);
    printf("The result of (x + y)^3 is: %d\n", result);

}