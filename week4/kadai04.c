#include <stdio.h>
#include <string.h>

void uppercase(char *s);

int main(){
  char s[] = "hello world";
  uppercase(s);
  printf("%s\n",s);
  return 0;
}

void uppercase(char *s){
  char temp[strlen(s)];
  for(int i = 0; i < strlen(s); i++){
    if(97 <= s[i] && s[i] <= 122){
      temp[i] = s[i] - 'a' + 'A';
    }else{
      temp[i] = s[i];
    }
  }
  temp[strlen(s)] = '\0';
  strcpy(s, temp);
}
