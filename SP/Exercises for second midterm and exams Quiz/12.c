#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[100];
    fgets(text, sizeof(text), stdin);
    text[strlen(text)-1] = '\0';

    char text2[100];
    int first;
    int second= strlen(text)-1;
    int counter = 0;
    for (int i = 0; i < strlen(text); ++i) {
        if(isdigit(text[i])){
            counter++;
            if(counter==1){
                first = i;
            }
            if(counter==2){
                second=i;
            }
        }
    }
    if(counter == 0){
        printf("No digits");
    }else{
        for (int i = first; i <= second; ++i) {
            printf("%c", text[i]);
        }
    }
    return 0;
}
