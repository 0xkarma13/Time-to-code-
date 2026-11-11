#include <stdio.h>

int main() {
  int number;
  printf("Give a number: ");
  scanf("%d", &number);
  int res = number * number;

  if (number > 0) {
    printf("the square of your number is: %d\n", res);
  }

  else {
    printf("Error: 0 or under it\n");
  }
}
