#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define MAX 100


// DO NOT CHANGE!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int isVowel(char c){
    c= tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
        return 1;
    }else{
        return 0;
    }
    
    
}

int main() {
    wtf();

    FILE *f = fopen("sp.txt", "r");
    FILE *fo = fopen("output.txt", "w");
    int k;
    char c;

    fscanf(f, "%d", &k);

    while ((c= getc(f)) != EOF){
        if(isVowel(c)){
            for (int i = 0; i < k; ++i) {
                fprintf(fo, "%c", c);
            }
            }else if(c!='\n'){
                fprintf(fo, "%c", c);
            }
       
    }
    fclose(f);
    fclose(fo);
    rff();
    return 0;

}
