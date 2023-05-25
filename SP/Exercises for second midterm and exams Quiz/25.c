#include <stdio.h>

int even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else
        return 0;
}

int digit1(int n) {
    if (n < 10) {
        return n;
    } else {
        return digit1(n / 10);
    }
}

int main() {
    int a[69];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int first = digit1(a[i]);
        int last = a[i] % 10;
        if (!(even(first)) && even(last)) {
            printf("%d\n", a[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("No such elements!");
    }
    return 0;
}
