#include <stdio.h>
#include<ctype.h>
#include<string.h>


void news(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == '\n') {
            text[i] = ' ';
        }
        i++;
    }
}

void fix(char text[]) {
    int i = 0;
    char previous = text[0];
    while (text[i] != '\0') {
        if (isalpha(text[i]) && previous == ' ') {
            text[i - 1] = '\n';
        }
        previous = text[i];
        i++;
    }
}


void writeToFile();

int main() {

    writeToFile();
    char str[1000];
    FILE *f = fopen("text.txt", "r");
    char c;
    int i = 0;
    while ((c = fgetc(f)) != EOF) {

        if (isalpha(c) || c == ' ' || c == '\n') {
            str[i] = c;
            i++;
        }
        str[i] = '\0';

    }
    news(str);
    fix(str);
    puts(str);
    fclose(f);

    return 0;
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
