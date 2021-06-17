#include <stdio.h>
#include <string.h>

/*kadai04.cでuppercase()をちょうど作っていたのでそれを用いて小文字も対応させました*/

int roman2num(char*);
int romanchar2num(char);
void uppercase(char*s);

int main(){
  printf("XIV = %d\n", roman2num("XIV"));
  printf("CDXCV = %d\n", roman2num("CDXCV"));
  printf("MCMXLV = %d\n", roman2num("MCMXLV"));
  printf("MMMCMXCIX = %d\n",roman2num("MMMCMXCIX"));
  return 0;
}

int roman2num(char *s){
  char passed_string[strlen(s)];
  int integer_list[strlen(s)];
  int sum = 0;
  strcpy(passed_string,s);
  uppercase(passed_string);
  for(int i = 0; i < strlen(s); i++){
    if(romanchar2num(s[i]) < romanchar2num(s[i+1])){
      sum -= romanchar2num(s[i]);
    } else {
      sum += romanchar2num(s[i]);
    }
  }
  return sum;
}

int romanchar2num(char c){
  /*printf("I: %d, V: %d, X: %d, L: %d, C: %d, D: %d, M: %d\n",'I','V','X','L','C','D','M');*/
  if(c == 73){
    return 1;
  } else if(c == 86){
    return 5;
  } else if(c == 88){
    return 10;
  } else if(c == 76){
    return 50;
  } else if(c == 67){
    return 100;
  } else if(c == 68){
    return 500;
  } else if(c == 77){
    return 1000;
  }
  return 0;
}

void uppercase(char *t){
  char temp[strlen(t)];
  for(int i = 0; i < strlen(t); i++){
    if(97 <= t[i] && t[i] <= 122){
      temp[i] = t[i] - 'a' + 'A';
    }else{
      temp[i] = t[i];
    }
  }
  temp[strlen(t)] = '\0';
  strcpy(t, temp);
}
