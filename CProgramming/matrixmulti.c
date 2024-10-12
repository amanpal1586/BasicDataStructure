#include <stdio.h>

int main(){
    int a[10][10], b[10][10], c[10][10];
    int aRows, aCols,  bRows, bCols, cRows, cCols;
    int i, j, k;
    printf("enter the value of Rows and Column of matrix A");
    scanf("%d %d", &aRows,  &aCols);
    printf("give the matrix A");
    for(i=0;i<aRows;i++){
        for(j=0;j<aCols;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of Rows and Column of matrix B");
    scanf("%d %d", &bRows, &bCols);
    printf("give the matrix B");
    for(i=0;i<bRows;i++){
        for(j=0;j<bCols;j++){
            scanf("%d", &b[i][j]);
        }
    }

    cRows = aRows;
    cCols = bCols;

    for(i=0;i<cRows;i++){
        for(j=0;j<cCols;j++){
            c[i][j] = 0;
            for(k=0;k<aCols;k++){
                c[i][j] = a[i][k]*b[k][j];
            }
        }
    }
    printf("printing the matrix C\n");
    for(i=0;i<cRows;i++){
        for(j=0;j<cCols;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}