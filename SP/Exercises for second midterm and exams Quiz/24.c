#include <stdio.h>
#include<math.h>
int powr(int value, int n) {
    while (n > 1) {
        value *= 10;
        n -= 1;
    }
    return value;
}

int max(int a[], int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int a[69];
    int n;
    int k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        int keep = a[i];
        int counter = 0;
        while (keep > 0) {
            counter++;
            if (keep % 10 <= k) {
                int digits = a[i] % (int) powr(10, counter - 1);
                a[i] = a[i] / (int) powr(10, counter);
                if (digits > k) {
                    a[i] = a[i] * (int) powr(10, counter - 1) + digits;
                }
                counter--;
            }
            keep /= 10;
        }
    }
    printf("%d", max(a, n));

    return 0;
}
