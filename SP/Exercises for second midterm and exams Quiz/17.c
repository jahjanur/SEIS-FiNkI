#include <stdio.h>
#include <string.h>
#include <ctype.h>

// DO NOT CHANGE!
int hexadecimal(char text[]) {
    int i=0;
    while (text[i] != 0) {
        text[i] = toupper(text[i]);
        if (text[i] == '\n') {
            return 0;
        }
        if (isdigit(text[i]) == 0 &&
            (
                    text[i] != 'A' &&
                    text[i] != 'B' &&
                    text[i] != 'C' &&
                    text[i] != 'D' &&
                    text[i] != 'E' &&
                    text[i] != 'F'
            )) {
            return 0;
        }
        i++;
    }
    return 1;

}
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    char str[30];
    FILE * f = fopen("input.txt", "r");
    int count = 0;
    while((fscanf(f, "%s", str)) != EOF) {
        if (hexadecimal(str) == 1) {
            puts(str);
            count++;
        }
    }
    printf("Total: %d", count);
    fclose(f);
    return 0;
}




