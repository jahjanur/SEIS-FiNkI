#include <stdio.h>
#include<stdlib.h>

int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int isStrong(int num) {
    int sum = 0;
    int tmp = num;
    while (tmp > 0) {
        sum += factorial(tmp % 10);
        tmp /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Strong numbers:\n");
    for (int i = 0; i < n; i++) {
        if (isStrong(a[i])) {
            printf("%d\n", a[i]);
        }
    }


    return 0;
}
