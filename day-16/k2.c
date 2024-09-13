#include <stdio.h>

int main() {
    int raw, col ;
    int new = 11;


    for(raw = 11; raw <= 14; raw++) {
        for(col = raw; col >= 11; col--) {
            printf("%d ", new);
            new++;
        }
        printf("\n");
    }

}
