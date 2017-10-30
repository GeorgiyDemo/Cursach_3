#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iomanip>
#include <iostream>

using namespace std;

char * settime(struct tm *u){
  char s[40];
  char *tmp;
  for (int i = 0; i<40; i++) s[i] = 0;
  int length = strftime(s, 40, "%d.%m.%Y", u);
  tmp = (char*)malloc(sizeof(s));
  strcpy(tmp, s);
  return(tmp);
}
int main(){

  struct tm *u;
  char *f;
  const time_t timer = time(NULL);
  u = localtime(&timer);
  f = settime(u);
  cout<<f;
  return 0;

}
//Он ссылаться на это поле не может э