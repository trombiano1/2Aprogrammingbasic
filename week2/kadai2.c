#include <stdio.h>
#include <math.h>
int zeller(int, int, int);
int main(){
  int year = 2016, month = 2, day = 5;
  int w;
  w = zeller(year, month, day);
  printf("%d/%d/%d is ", month, day, year);
  switch(w%7){
  case 0: printf("Sat.\n"); break;
  case 1: printf("Sun.\n"); break;
  case 2: printf("Mon.\n"); break;
  case 3: printf("Tue.\n"); break;
  case 4: printf("Wed.\n"); break;
  case 5: printf("Thurs.\n"); break;
  case 6: printf("Fri.\n"); break;
  }
  return 0;
}
int zeller(int year, int month, int day){
  int h, y, w;
  if(month<3){
    month += 12;
    year -= 1;
  }
  h = year/100;
  y = year-h*100;
  w = y+floor(y/4)+floor(h/4)-2*h+floor((13*(month+1))/5)+day;
  return w;
}
