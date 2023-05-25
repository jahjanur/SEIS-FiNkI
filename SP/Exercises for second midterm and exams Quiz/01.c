#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void transform(char str[100], int x, int i) {
    if (str[i] == '\0') {
        return;
    } else {
        if(isalpha(str[i])) {
            if (isupper(str[i])) {
                if (str[i] + x > 'Z') {
                    str[i] = str[i] - ('Z' + 1) + 'A' + x;
                } else {
                    str[i] = str[i] + x;
                }
            }
            if (islower(str[i])) {
                if (str[i] + x > 'z') {
                    str[i] = str[i] - ('z' + 1) + 'a' + x;
                } else {
                    str[i] = str[i] + x;
                }
            }
        }
        transform(str, x, i + 1);
    }
}

int main() {
    int n;
    int x;
    scanf("%d%d\n", &n, &x);

    char str[100];
    for (int i = 1; i <= n; ++i) {
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1] = '\0';
        transform(str, x, 0);
        puts(str);
    }
    return 0;
}

// From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:
// N - number of strings you are going to read
// X - shifting size.
// Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z) 
// are replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet,
// continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.
