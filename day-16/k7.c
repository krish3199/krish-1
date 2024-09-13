#include <stdio.h>

int main() {
    int raw, col;

    for (raw = 0; raw < 5; raw++) {
        printf("* ");
    }
    printf("\n");

    printf("* ");
    for (raw = 0; raw < 3; raw++) {
        printf("  ");
    }
    printf("*\n");

    for (raw = 0; raw < 5; raw++) {
        printf("* ");
    }
    printf("\n");

    printf("*\n");

    printf("* ");
    for (raw = 0; raw < 3; raw++) {
        printf("  ");
    }

}