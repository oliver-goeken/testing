#include <stdio.h>

int main(int argc, char *argv[]){
  char string[4] = {0};

  string[0] = 0;
  string[1] = 0;
  string[2] = 1;
  string[3] = 0;

  int *weird = &string;

  printf("%d\n", *weird);

  return 0;
}
