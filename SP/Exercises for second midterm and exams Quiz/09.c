#include <stdio.h>

int odd(int a[100], int n){
    if(n < 0)
        return 0;
    else {
        if(a[n]%2){
            return 1 + odd(a, n-1);
        } else {
            return 0 + odd(a, n-1);
        }
    }
}

int main(){
    int i, n, arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", odd(arr, n-1));
    return 0;
}


// Write a recursive function that will find the number of odd numbers of an array of integers. The function accepts as an arguments the array for which the number of odd numbers is required and the total number of elements in the array. The function is given with the following prototype:
// int Odd (int a [], int n);
// Also write the main () function to test the Odd function.
