#include<stdio.h>

int main() {
    int n;
    int a[100][100], result[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            result[i][j] = a[i][j];
        }
    }
    int sum1, sum2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum1 = 0;
                for (int k = j + 1; k < n; k++) {
                    sum1 += a[i][k];
                }
                for (int k = i - 1; k >= 0; k--) {
                    sum1 += a[k][j];
                }
                result[i][j] = sum1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                sum2 = 0;
                for (int k = j - 1; k >= 0; k--) {
                    sum2 += a[i][k];
                }
                for (int k = i + 1; k < n; k++) {
                    sum2 += a[k][j];
                }
                result[i][j] = sum2;
                if (i == j) {
                    result[i][j] = sum1 + sum2 - 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
