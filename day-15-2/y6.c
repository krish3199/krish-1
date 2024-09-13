#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 1; raw <= 5; raw++)
     {
        for (int space  = raw; space >= 1 ; space--)
        {
            printf("  ");
        }
        
        for(col = 5; col >= raw; col--) {
            printf("%d ", col);
        }
        printf("\n");
  }

}