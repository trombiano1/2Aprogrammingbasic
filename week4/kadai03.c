#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main(){
  char s[] = "hello";
  reverse(s);
  printf("%s\n",s);
  return 0;
}

void reverse(char *s){
  char temp[strlen(s)];
  for(int i=0; i < strlen(s); i++){
    temp[i] = s[strlen(s)-i-1];
  }
  temp[strlen(s)] = '\0';
  strcpy(s, temp);
}
