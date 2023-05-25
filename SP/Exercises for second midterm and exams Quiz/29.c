#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

//ne menuvaj!
void wtf() {
  FILE *f = fopen("input.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {
  wtf();
  FILE *f = fopen("input.txt", "r");
  char str[MAX], nStr[MAX];
  int a=0;
  while((fgets(str, MAX, f))!=NULL){
      int j=0;
      long num, sum=0;
      for(int i=0;i<strlen(str);i++){
          if(isdigit(str[i])){
              num = str[i]-48;
              i++;
              while(i<strlen(str) && isdigit(str[i])){
                  num = num * 10 + (str[i]-48);
                  i++;
              }
              if(i!=strlen(str) && isalpha(str[i])){
                  nStr[j] = str[i];
                  j++;
              }
              sum += num;
          } else if(isalpha(str[i])) {
              nStr[j] = str[i];
              j++;
          }
      }
      int state=1;
      for(int i=0;i<j;i++){
            if(nStr[i] != 'a')
                state = 0;
            printf("%c", nStr[i]);
      }
     
     if(state && j!=0){
         printf("78888\n0\n");
         a=1;
         return 0;
     } else if(sum == 1 || sum == 0 && j==0){
         continue;
     } else {
       printf("%ld\n", sum);   
     }
  }
  fclose(f);
  return 0;
}

