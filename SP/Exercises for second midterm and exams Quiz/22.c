#include <stdio.h>
#include<stdlib.h>

int max(int a, int b) {
    int max = a;
    if (b > max) {
        max = b;
    }
    return max;
}

int changed(int a[], int i, int n) {
    if (i >= n) {
        return 0;
    } else {
        if (a[i] == a[n]) {
            return changed(a, i + 1, n - 1);
        } else {
            int maxi = max(a[i], a[n]);
            if (a[i] > a[n]) {
                a[i] = maxi;
                a[n] = maxi;

                return changed(a, i + 1, n - 1);
            } else {
                a[i] = maxi;
                a[n] = maxi;
                return 1 + changed(a, i + 1, n - 1);
            }

        }
    }

}

int main() {
    int a[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", changed(a, 0, n - 1));

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
