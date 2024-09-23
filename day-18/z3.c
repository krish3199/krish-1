// #include <stdio.h>

// int main() {
//     int row, col, i, j, sum = 0;

//     printf(" Enter the array's row & column size: ");
//     scanf("%d", &row);

//     int a[row][row];

//     printf("Enter array's elements:\n");
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < row; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < row; i++) {
//         sum += a[i][i];
//     }

//     printf("The sum of diagonal elements of an Array: %d\n", sum);


// }



#include<stdio.h>

int main(){
    int rowsize,colsize,sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d",&rowsize);

    printf("Enter the array's column size: ");
    scanf("%d",&colsize);

    printf("\n");

    int box[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ",row,col);
            scanf("%d",&box[row][col]);
        }
    }

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row]==box[col])
            {
                sum += box[row][col]; 
            }
        }
    }

    printf("The sum of diagonal elements of an Array: %d",sum);
}