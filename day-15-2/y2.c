#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 5; raw >= 1; raw--)
     {
        for (int space  = raw; space >= 1 ; space--)
        {
            printf("  ");
        }
        
        for(col = raw; col <= 5; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

}
