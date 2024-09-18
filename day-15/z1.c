// #include <stdio.h>

// int main() {
//     int raw, col ;


//     for(raw = 1; raw <= 5; raw++) {
//         for(col = raw; col <= 5; col++) {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }

// }


#include<stdio.h>

int main(){

    for (int row  = 1; row <=5; row++)
    {
        
        
        for (int col  = 1; col <=row; col++)
        {
            printf("* ");

        }
        printf("\n");
    }
    

}