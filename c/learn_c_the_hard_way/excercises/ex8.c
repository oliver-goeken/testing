#include <stdio.h>

int main(int argc, char* argv[]){
  argc --;

  if(argc == 1){
    printf("You only have one argument. You suck!.\n");
  }else if(argc > 1 && argc < 4){
    printf("Here are your arguments:\n");

    for(int i = 1; i <= argc; i ++){
      printf("%s ", argv[i]);
    }

    printf("\n");
  }else if (argc >= 4){
    printf("You have too many arguments. You suck!");
  }

  return 0;
}
