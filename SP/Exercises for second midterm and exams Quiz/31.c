#include <stdio.h>
#include <string.h>

#define MAX 100

int max(int a[], int n) {
    int max = a[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    return index;
}

void wtf() {
    FILE *f = fopen("rectangle.in", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    int n;
    int a[100];
    int counter[100] = {0};
    FILE *f = fopen("rectangle.in", "r");
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (counter[i] == -1) continue;
            if (a[i] == a[j]) {
                counter[i]++;
                counter[j] = -1;
            }
        }
        counter[i]++;
    }
    int A, B;
    int index = max(counter, n);
    B = a[index];
    counter[index] = 0;
    index = max(counter, n);
    A = a[index];
    
    if (A > B) {
        int tmp = B;
        B = A;
        A = tmp;
    }
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            printf("* ");
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
