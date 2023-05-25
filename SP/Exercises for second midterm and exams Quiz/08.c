#include <stdio.h>
#include<stdlib.h>

int main() {
    int a[100][100];
    int m, n;

    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum[100];

    if (m % 2 == 1) {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i <= m / 2; i++) {
                sum[j] += a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = m / 2; i < m; i++) {
                sum[j] -= a[i][j];
            }
        }

        for (int j = 0; j < n; j++) {
            a[m / 2][j] = abs(sum[j]);
        }


    } else {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m / 2; i++) {
                sum[j] += a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = m / 2; i < m; i++) {
                sum[j] -= a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            a[m / 2][j] = abs(sum[j]);
            a[m / 2 - 1][j] = abs(sum[j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

// The dimensions of one matrix (m,n <= 100), and then the elements of the matrix are entered from the keyboard. Make a transformation of the matrix so that the middle element in each column is replaced by the difference (by absolute value) of the sum of the elements in the first half of the column and the sum of the elements in the second half of the column. If the matrix has even number of rows, the value of the middle two elements should be changed. The middle element(s) are included when calculating the sum (in the case of an odd number of rows, the middle element is included when calculating both of the sums (upper and lower sum)!). Print the transformed matrix on the standard output.
