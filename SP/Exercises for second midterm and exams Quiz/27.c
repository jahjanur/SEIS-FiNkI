#include <stdio.h>

int main() {
    int a[100][100], arr[1000];
    int n, m;

    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int index = 0;
    int flag = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            int key = a[i][j];
            int counter = 0;
            for (int k = 0; k < n; k++) {
                if (a[i][k] == key) {
                    counter++;
                }
            }
            if (counter <= 1) {
                flag = 1;
                arr[index] = a[i][j];
                index++;
            }
        }
    }
    if (flag == 0) {
        printf("N");
    } else {
        for (int i = 0; i < index; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
