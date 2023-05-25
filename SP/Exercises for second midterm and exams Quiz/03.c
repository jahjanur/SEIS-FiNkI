#include <stdio.h>

void countD(int a[], int n, int start){
    int counter=0;
    if(start>n){
        return;
    }else{
        int d=a[start] %10;
        while(a[start]>0){
            if(a[start] % 10 == d){
                counter++;
            }
            a[start] /= 10;
        }
        a[start] = counter;
        countD(a,n,start+1);
    }
}

int main() {
   int a[100];
   int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    countD(a, n, 0);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Let A = {a1, a2, .. a_n} is an array of integers. The size of the array n and the elements of the array are read from SI. Write a program that will transform the array so each element of the original array is replaced with the number of appearance of the least significant digit (the right most) in the number itself. Print the result array on the standard output.
// Compute the count of given digit in a number with separate recursive function.
