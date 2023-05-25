#include <stdio.h>

int main() {
    int a[100][100];
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int index = 0;
    int min;
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += a[i][j];
        }

        if (j == 0) {
            min = sum;
        } else {
            if (sum < min) {
                min = sum;
                index = j;
            }
        }
    }
    printf("%d", index);

    return 0;
}
