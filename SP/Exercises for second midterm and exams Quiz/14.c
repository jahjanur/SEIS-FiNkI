#include <stdio.h>
#include<stdlib.h>


int main() {
    int a[100][100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][1];
    int min = a[1][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                if (a[i][j] > max) {
                    max = a[i][j];
                }
            }
            if (i > j) {
                if (a[i][j] < min) {
                    min = a[i][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i<j){
                a[i][j]=max;
            }
            if(i>j){
                a[i][j]=min;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
