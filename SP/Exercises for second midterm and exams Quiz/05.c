#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int a[100][100];
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int rowCount = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= n - 3; j++) {
            if (a[i][j] == 1) {
                if (a[i][j + 1] == 1 && a[i][j + 2] == 1) {
                    rowCount++;
                    break;
                }
            }
        }
    }
    int columnCount = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i <= m - 3; i++) {
            if (a[i][j] == 1) {
                if (a[i + 1][j] == 1 && a[i + 2][j] == 1) {
                    columnCount++;
                    break;
                }
            }
        }
    }
    printf("%d", rowCount + columnCount);

    return 0;
}
// In a given file "numbers.txt" are written more rows with integers, and each row starts with one integer (N >= 1) that represents how many integers are following afterwards in the same row. Write a program that on SO will print print the number with largest most significant digit. Reading of integers ends when 0 is read.
