#include <stdio.h>

int main() {
    int N;
    int num = 2; 

    printf("Enter any number: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("No even numbers in the given range.\n");
    } else {
        do {
            printf("%d ", num); 
            num += 2; 
        } while (num <= N); 

        printf("\n"); 

}
