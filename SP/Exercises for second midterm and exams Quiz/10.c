#include <stdio.h>

void bubbleSort(int a[], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int parityComplement(int n){
    if(n==0)
        return 0;
    else{
        int digit = n % 10;
        if(digit % 2 == 0){
            digit= digit+1;
        } else{
            digit=digit-1;
        }
        return digit + 10 * parityComplement(n/10);
    }
}


int main() {
    int n;
    int a[100];
    int counter = 0;

    for (int i = 0; scanf("%d", &n); i++) {
        counter++;
        a[i] = parityComplement(n);
    }
    int index;
    if(counter <= 5){
        index = counter;
    }else{
        index = 5;
    }
    bubbleSort(a, counter);

    for (int i = 0; i < index; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}


// For one integer b we say that is a parity complement of other integer a if and only if in the number b all the even digits of the number a are replaced with the corresponding (odd) digit increased by 1, and all odd digits of the number a are replaced with the corresponding (odd) digit decreased by 1 .
// Example. Number b = 4013698 is a parity complement of a = 5102789.
// Read from SI unknown number of integers (not more than 100), until something that is not a number is entered.
// Your task is to print the smallest 5 of the parity complements of all numbers, from the smallest to the largest.
// Notice: If less then 5 numbers are entered, then print all the entered numbers.
// Finding the parity complement of a number should be implemented in a separate recursive function parcom(int a).
// Example.
// For numbers: 9641, 69403, 103007, 6, 11, 181, 20486 you should find their parity complements (those are: 8750, 78512, 12116, 7, 0, 90 and 31597, respectively), and print the 5 smallest of them in this order: 0 7 90 8750 12116.
// Using global variables is FORBIDDEN.
