#include <stdio.h>

#define MAX 10 

void add(int mat1[MAX][MAX], int mat2[MAX][MAX], int row, int col) {
    int result[MAX][MAX];

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    
    printf("\n\tThe Result of Matrix Addition:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("\t%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row1, col1, row2, col2;

    
    printf("\nEnter the Number of Rows: ");
    scanf("%d", &row1);
    printf("Enter the Number of Columns: ");
    scanf("%d", &col1);

    int mat1[MAX][MAX], mat2[MAX][MAX];

    printf("\n\tEnter the First Matrix Elements:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    
    printf("\n\tEnter the Second Matrix Elements:\n");
    printf("\nEnter the Number of Rows: ");
    scanf("%d", &row2);
    printf("Enter the Number of Columns: ");
    scanf("%d", &col2);
    if(row1==row2 && col1==col2){
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                printf("Element at [%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }
    }
    else{
        printf("The Given Matrix order is NOT Equivalent for Addition");
        return 0;
    }
    
    int row=row1;
    int col=col1;
    // Call Function to Add Matrices
    add(mat1, mat2, row, col);

    return 0;
}
