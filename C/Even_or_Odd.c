#include <stdio.h>

int main() {
  int size;

  printf("How many numebr?: ");
  scanf("%d", &size);

  int number[size];


  for (int i = 0; i < size; i++) {
    printf("Enter number: %d: ", i + 1);
    scanf("%d", &number[i]);
  }

  int res = sizeof(number) / sizeof(number[0]);

  for (int i = 0; i < res; i++) {
    if (number[i] % 2 == 0) {
      printf("Even: %d\n", number[i]);
    } else {
      printf("Odd: %d\n", number[i]);
    }
  }

  return 0;
}
