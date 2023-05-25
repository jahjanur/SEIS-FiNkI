#include <stdio.h>
#include<ctype.h>
#include <string.h>

#define MAX 80

double getRatio(char str[]) {
    double upper = 0;
    double lower = 0;
    for (int i = 0; str[i]!='\0'; ++i) {
        if (isupper(str[i])) upper++;
        if (islower(str[i])) lower++;
    }
    return upper / lower;
}


void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wtf();
    FILE *f = fopen("text.txt", "r");
    char str[MAX];
    float ratio;
    float max;
    int index = 0;
    int counter = 0;
    int flag = 0;
    while (fgets(str, sizeof(str), f) != 0) {
        str[strlen(str) - 1] = '\0';

        if (flag == 0) {
            max = getRatio(str);
            flag = 1;
        }
        ratio = getRatio(str);
        printf("%.2f %s\n", ratio, str);
        if (ratio > max) {
            max = ratio;
            index = counter;
        }
        counter++;
    }
    printf("%d", index);
    fclose(f);

    return 0;
}
