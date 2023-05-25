#include <stdio.h>
#include <ctype.h>
#include <string.h>

int nrLetters(char text[]) {
    int n = strlen(text);
    int counter = 0;
    int flag[100] = {0};
    for (int i = 0; text[i] != '\0'; i++) {
        if (flag[i] == 0) {
            for (int j = i + 1; text[j] != '\0'; j++) {
                if (text[i] == text[j]) {
                    flag[j] = 1;
                    counter++;
                }
            }
        }
    }
    return n - counter;
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
    char *file = "input.txt";
    writeToFile("input.txt");
    FILE *f = fopen(file, "r");
    char str[100];
    int flag = 0;
    int max = 0;
    char result[100];

    while (fgets(str, sizeof(str), f) != 0) {
        str[strlen(str) - 1] = '\0';
        int num = nrLetters(str);
        if (flag == 0) {
            max = num;
            flag = 1;
        }
        if (num >= max) {
            max = num;
            strcpy(result, str);
        }
    }
    puts(result);
    fclose(f);
    return 0;
}
