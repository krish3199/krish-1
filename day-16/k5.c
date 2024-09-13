#include <stdio.h>

int main() {

    for (int raw = 5; raw >= 1; raw--) {
        for (int space = raw; space >= 1; space--) {
            printf("  ");  
        }
        
        for ( int col = raw; col <= 5; col++) {
            printf("%d ", col);
        }

        for ( int col = 4 ; col >= raw; col--) {
            printf("%d ", col);
        }

        printf("\n");
    }

}