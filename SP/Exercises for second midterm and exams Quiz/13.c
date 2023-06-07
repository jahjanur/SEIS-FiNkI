#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include  <stdlib.h>

void tranform(int array[], int n) {
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] != 0) {
            if (array[i] == array[i + 1]) {
                array[j++] = array[i] * 2;
                array[i + 1] = 0;
                i++; 
            } else {
                array[j++] = array[i];
            }
        }
    }
    for (; j < n; ++j) {
        array[j] = 0;
    }
}

void reordering(int array[], int n){
    int j=0;
    for (int i = 0; i < n; ++i) {
        if(array[i] != 0){
            array[j]=array[i];
            j++;
        }
    }
    for (int k = j; k < n; ++k) {
        array[j]=0;
    }
}
int  main(){
    int n;
    int array[100];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    tranform(array,n);
    reordering(array, n);
    for (int i = 0; i < n;++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
