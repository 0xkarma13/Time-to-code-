"""simple code for Counting letters in a word"""
#include <stdio.h>

int main() {

  char name[10];
  int count = 0;

  char cr;

  printf("Please give me a name: ");
  scanf("%9s", name); // this 9 for i want o say you can write just 9 word, after that you can't
  printf("Please give me a charecter: ");
  scanf(" %c", &cr); //this space it should be there Otherwise it can't work 

  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] == cr) {
      count++;
    }
  }
  printf("count: %d\n", count);

  return 0;
}
