#include <stdio.h>

int main(int argc, char *argv[]){
  int numbers[4] = {0};
  char name[4] = {'a'};

  //first, print them out raw
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("name: %s\n", name);

  //set up the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  //set up the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  //then print them out initialized
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  //print the name like a string
  printf("name: %s\n", name);

  //another way to use name
  char *another = "Zed";

  printf("another: %s\n", another);

  printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

  numbers[0] = 'Z';
  numbers[1] = 'e';
  numbers[2] = 'd';
  numbers[3] = '\0';

  printf("character by character nums: %c %c %c %c\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("testing: %d %d %d %d\n", name[0], name[1], name[2], name[3]);

  name[0] = 0;
  name[1] = 0;
  name[2] = -2;
  name[3] = 0;

  unsigned int *weird;

  weird = &name;

  printf("laskdjfkj: %lu\n", sizeof(weird));

  /*for(int i = 0; i < sizeof(weird); i ++){

  }*/

  return 0;
}
