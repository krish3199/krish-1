#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 1; raw <= 5; raw++) {
        for(col = raw; col >= 1; col--) {
            printf("%d ", col);
        }
        printf("\n");
    }

}
