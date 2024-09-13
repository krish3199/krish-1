#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 1; raw <= 5; raw++) {
        for(col = 1; col <= raw; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

}
