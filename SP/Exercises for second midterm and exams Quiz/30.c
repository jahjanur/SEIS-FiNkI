#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 31

int isVowel(char a) {
    if (tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'u' ||
        tolower(a) == 'y') {
        return 1;
    } else {
        return 0;
    }
}

int palindrome(char str[]) {
    int n = strlen(str);
    int flag = 1;
    for (int i = 0; i <= n / 2; i++) {
        if (!isVowel(str[i]) && isVowel(str[n - i - 1])) flag = 0;
        if (isVowel(str[i]) && !isVowel(str[n - i - 1])) flag = 0;
        if (isVowel(str[i]) && isVowel(str[n - i - 1])) {
            if (tolower(str[i]) != tolower(str[n - i - 1])) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}


void writeToFile(char *file) {
    FILE *f = fopen(file, "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    char *filename = "input.txt";
    writeToFile(filename);
    char str[100];
    FILE *f = fopen("input.txt", "r");

    while (fscanf(f, "%s", str) != EOF) {
        if (palindrome(str)) {
            puts(str);
        }
    }
    fclose(f);

    return 0;
}
