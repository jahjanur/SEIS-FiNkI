#include <stdio.h>

void column(int start, int end) {
    if (start > end) {
        return;
    } else {
        printf("%d", start);
        column(start + 1, end);
    }
}

void triangle(int n) {
    if (n == 0) {
        return;
    } else {
        triangle(n - 1);
        column(1, n);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    triangle(n);

    return 0;
}
