#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the row size: ");
    scanf("%d", &rows);
    printf("Enter the column size: ");
    scanf("%d", &cols);

    int box[rows][cols];

    for (int raw = 0; raw < rows; raw++) {
        for (int col = 0; col < cols; col++) {
            printf("Enter the elements:\n");
            scanf("%d", &box[raw][col]);
        }
    }
     for (int raw = 0; raw < rows; raw++) {
        for (int col = 0; col < cols; col++) {
            printf("%d",box[rows][cols]);
        }
    }

    int rowNum,sum=0;
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    
    for (int raw = 0; raw < rows; raw++) {
        sum += box[rowNum][raw];
    }
    printf("Sum of row %d: %d\n", rowNum, sum);

    int colNum, Sum=0;
    printf("Enter column number: ");
    scanf("%d", &colNum);

    
    for (int col = 0; col < cols; col++) {
        Sum += box[col][colNum];
    }
    printf("Sum of column %d: %d\n", colNum, Sum);

}
