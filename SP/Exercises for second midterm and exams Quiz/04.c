#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countDigit(int a,int b, int c){
    int tempA=a, tempB=b, countA=0, countB=0;
    tempA/=10;
    tempB/=10;
    while (tempA){
        int digit=tempA%10;
        if(digit==c){
            countA++;
        }
        tempA/=100;
    }
    while (tempB){
        int digit=tempB%10;
        if(digit==c){
            countB++;
        }
        tempB/=100;
    }
    if(countA>=countB){
        return a;
    }else return b;
}

int main(){
   int a,b,c;

    while(scanf("%d%d%d", &a, &b, &c) == 3){
        printf("%d\n", countDigit(a, b, c));
    }
    return 0;
}

// Write a program that will read unknown number of three integers, and for each triple (a, b, c) will print the number (a or b) that contains the digit c more times on even positions (the positions are counted from right to left, and the first position is 1).
