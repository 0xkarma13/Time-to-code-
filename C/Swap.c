#include <stdio.h>

int main(void) {
  int a, b, temp; // this is simple code for Swap

  printf("Please give me two numebr for swap: ");
  scanf("%d%d", &a, &b);
  printf("befor a is : %d befor b is : %d\n", a, b);

  temp = a;
  a = b;

  b = temp;
  printf("after a is : %d after b is : %d\n", a, b);
}
