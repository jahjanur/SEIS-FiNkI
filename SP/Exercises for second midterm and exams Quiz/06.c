#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int matrix[100][100];
    int m, n;
    scanf("%d%d", &m,&n);

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int rowCount =0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <= n - 3; ++j) {
            if(matrix[i][j]==1){
                if(matrix[i][j+1] == 1 && matrix[i][j+2] == 1){
                    rowCount++;
                    break;
                }
            }
        }
    }
    int colCounter =0;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i <= m - 3; ++i) {
            if(matrix[i][j] == 1){
                if(matrix[i+1][j] == 1 && matrix[i+2][j] == 1){
                    colCounter++;
                    break;
                }
            }
        }
    }
    printf("%d", rowCount+colCounter);
    return 0;
}





// Write a program that reads matrix with dimensions MxN (max. 100x100). At the beginning the dimensions are read, and then the elements of the matrix with values 0 or 1. Your program should count and print on SO the number of rows and columns with at least 3 consecutive appearance of elements with value 1.
// Example:
// 1 1 1 0
// 1 0 1 1
// 1 0 0 1
// 1 row + 1 column = 2
