// #include <stdio.h>

// int main() {
//     int raw, col ;


//     for(raw = 1; raw <= 5; raw++) {
//         for(col = raw; col >= 1; col--) {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }

// }


#include<stdio.h>

int main(){

    for (int row = 5; row >= 1; row--)
    {
        for (int col  = 1; col <= row; col++)
        {
             if (col % 2 == 0)
        {
            printf("0 ");
        }
        else{
            printf("1 ");
        }
        }
       
        
    printf("\n");
        
    }

}