#include <stdio.h>

int main(){
    int m,n;
    int matrix[100][100], summedMatrix[100][100];
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0) {
                if (j == 0) {
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                } else if (j == (n - 1)) {
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix [i][j - 1];
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                } else {
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix[i][j - 1];
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                }
            } else if (i == (m - 1)) {
                if (j == 0) {
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                } else if (j == (n - 1)) {
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix[i][j - 1];
                } else {
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix[i][j - 1];
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                }
            } else {
                if (j == 0) {
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                } else if (j == (n - 1)) {
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix[i][j - 1];
                } else {
                    if (matrix[i + 1][j] >= 0) summedMatrix[i][j] += matrix[i + 1][j];
                    if (matrix[i - 1][j] >= 0) summedMatrix[i][j] += matrix[i - 1][j];
                    if (matrix[i][j + 1] >= 0) summedMatrix[i][j] += matrix[i][j + 1];
                    if (matrix[i][j - 1] >= 0) summedMatrix[i][j] += matrix[i][j - 1];
                }
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", summedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
