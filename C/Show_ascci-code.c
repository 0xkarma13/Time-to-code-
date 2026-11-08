"""a simple code for get asscii code"""
#include <stdio.h>

int main() {
  char res[50]; //Here, we allocated 50 word-slots from memory.

  printf("Please give a world for ascii code (without space): ");
  scanf("%s", res); 

  for (int i = 0; res[i] != '\0'; i++) {
    printf("%d\n", res[i]);
  }

  return 0;
}
➜
