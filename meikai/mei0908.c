#include <stdio.h>

int str_length(const char s[]){
  int len;

  while(s[len]){
    len++;
  }
  return len;
}

int main(void){
  char str[128];

  printf("input strings");
  scanf("%s", str);

  printf("length%d", str_length(str));

  return 0;

}
