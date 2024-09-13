#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 41; raw <= 45; raw++) {
        for(col = 41; col <= raw; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

}
