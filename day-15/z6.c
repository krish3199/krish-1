#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 5; raw >= 1; raw--) {
        for(col = 5; col >= raw; col--) {
            printf("%d ", raw);
        }
        printf("\n");
    }

}
