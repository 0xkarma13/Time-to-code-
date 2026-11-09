"""Simple code for adding two numbers"""
#include <stdio.h>

int sum(int num1, int num2) { return num1 + num2; }

int main() {
  int a;
  int b;

  printf("give a tow numebr for sum: ");
  scanf("%d %d", &a, &b);

  printf("sum of your number is: %d\n", sum(a, b));

  return 0;
}
