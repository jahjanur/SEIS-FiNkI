#include <stdio.h>

int main() {
    float a[100][100];
    float b[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }
    int index = 0;
    for (int j = 0; j < n - 1; j++) {
        b[index] = a[0][j];
        index++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                b[index] = a[i][j];
                index++;
            }
        }
    }
    for (int j = 1; j < n; j++) {
        b[index] = a[n - 1][j];
        index++;
    }
    int revIndex = index - 1;
    for (int j = 0; j < n - 1; j++) {
        a[0][j] = b[revIndex];
        revIndex--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                a[i][j] = b[revIndex];
                revIndex--;
            }
        }
    }
    for (int j = 1; j < n; j++) {
        a[n - 1][j] = b[revIndex];
        revIndex--;
    }

    for (int i = 0; i < index; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
