#include <stdio.h>
#include <string.h>
#include <ctype.h>

// DO NOT CHANGE HERE
void wtf() {
    FILE *f = fopen("datnum.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
float ratio(char str[]){
    int digits=0;
    int letters=0;
    int i=0;
    while (str[i] != '\0'){
        if(isdigit(str[i]))digits++;
        if(isalpha(str[i]))letters++;
        i++;
    }
    if(letters == 0){
        return -1;
    }
    return (float)digits / letters;
}



int main() {
    wtf();
     
    FILE *f = fopen("datnum.txt", "r");
    char str[100];
   
    char maxStr[100];
    float largest = 0;

    while (fgets(str, sizeof(str), f) != 0) {
        str[strlen(str) - 1] = '\0';
        float n = ratio(str);
        if (n == -1) continue;
        if (n >= largest) {
            largest = n;
            strcpy(maxStr, str);
        }
    }
    puts(maxStr);
    return 0;
}
