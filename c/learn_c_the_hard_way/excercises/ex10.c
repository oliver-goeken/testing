#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc != 2){
    printf("ERROR: You need one argument.\n");
    return 1;
  }

  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++){
    char letter = argv[1][i];

    char upperLetter = letter - ((letter > 90) * 32 );

    if(upperLetter == 'A'||
       upperLetter == 'E'||
       upperLetter == 'I'||
       upperLetter == 'O'||
       upperLetter == 'U'||
       ((upperLetter == 'Y') && (i > 2))){
      printf("%d: '%c' *vowel*\n", i, letter);
    }else{
      printf("%d: '%c' is not a vowel\n",i, letter);
    }

    /*switch(letter - ((letter > 90) * 32 )){
      case 'A':
        printf("%d: 'A'\n", i);
        break;
      case 'E':
        printf("%d: 'E'\n", i);
        break;
      case 'I':
        printf("%d: 'I'\n", i);
        break;
      case 'O':
        printf("%d: 'O'\n", i);
        break;
      case 'U':
        printf("%d: 'U'\n", i);
        break;
      case 'Y':
        if(i > 2){
          printf("%d: 'Y'\n", i);
        }
        break;
      default:
        printf("%d: %c is not a vowel\n", i, argv[1][i]);
    }*/
  }

  return 0;
}
