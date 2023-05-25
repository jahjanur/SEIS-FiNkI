#include <stdio.h>
#include <ctype.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("sifra.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f= fopen("sifra.txt", "r");
    char c;
    int n;
    while((c= fgetc(f)) != EOF){
        if(isalpha(c)){
            c= tolower(c);
            if(c+3>'z'){
               c = c - ('z' - 'a' + 1);//c -= 'z'-'a'+1;
            }
            c=c+3;
        }
        printf("%c", c);
    }

    return 0;
}

// Write a program that will print the contents of the text file sifra.txt coded. The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...) is replaced with the letter 3 places after in the alphabet. In case of the letters at the end of the alphabet, the counting continues cyclic from the beginning of the alphabet. In the final coded text all letters are lowercase. Example letter a is coded to d, H is coded to k, p is coded to s, x is coded to a, etc.
