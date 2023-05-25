#include <stdio.h>

int main() {
    int a[100][100], b[100][100];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 0) {
                b[i][j] = a[i][j];
            } else {
                if (i == 0) {
                    if (j > 0 && j < n - 1)
                        if (a[i][j + 1] == 1 && a[i][j - 1] == 1 && a[i + 1][j] == 1) b[i][j] = 1;

                } else if (i == n - 1) {
                    if (j > 0 && j < n - 1) {
                        if (a[i][j + 1] == 1 && a[i][j - 1] == 1 && a[i - 1][j] == 1) b[i][j] = 1;
                    }

                } else if (i > 0 && i < n) {
                    if (j == 0) {
                        if (a[i][j + 1] == 1 && a[i + 1][j] == 1 && a[i - 1][j] == 1)
                            b[i][j] = 1;

                    } else if (j == n - 1) {
                        if (a[i][j - 1] == 1 && a[i + 1][j] == 1 && a[i - 1][j] == 1) b[i][j] = 1;

                    } else {
                        if ((a[i][j - 1] == 1 && a[i + 1][j] == 1 && a[i - 1][j] == 1) ||
                            (a[i][j + 1] == 1 && a[i + 1][j] == 1 && a[i - 1][j] == 1) ||
                            (a[i][j + 1] == 1 && a[i + 1][j] == 1 && a[i][j - 1] == 1) ||
                            (a[i][j + 1] == 1 && a[i - 1][j] == 1 && a[i][j - 1] == 1))
                            b[i][j] = 1;

                    }
                }

            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
