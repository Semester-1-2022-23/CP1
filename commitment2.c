//Student ID: 89221055
//Student: Anastasija Temova

#include <stdio.h>
#include <string.h>

char word[] = "hangman";
char wordBlanks[] = "--------";

void drawHangman(int mistakes) {
  switch(mistakes){
    case 1:
      printf("   |\n");
      break;
    case 2:
      printf("   |\n   O\n");
      break;
    case 3:
      printf("   |\n   O\n   |\n");
      break;
    case 4:
      printf("   |\n   O\n  /|\n");
      break;
    case 5:
      printf("   |\n   O\n  /|\\\n");
      break;
    case 6:
      printf("   |\n   O\n  /|\\\n  /\n");
      break;
    default:
      // Default case
      break;
  }
}

int main() {
  if (strcmp(word, wordBlanks) == 0){
    printf("Congratulations! You won the game!\n");
    return 0; 
  }
}
