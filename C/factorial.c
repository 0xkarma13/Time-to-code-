// simple code for factorial
#include <stdio.h>

int factorial(int number) {
  if (number == 0) {
    return 1;
  }

  printf("%d", number);

  if (number > 1) {
    printf("*");
  }

  int res = number * factorial(number - 1);
  return res;
}

int main() {
  int number;

  printf("give me a number for factorial: ");
  scanf("%d", &number);

  printf("= %d", factorial(number));
}
