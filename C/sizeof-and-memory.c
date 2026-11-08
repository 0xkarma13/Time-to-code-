"""When you create a variable in C, you are essentially telling the computer:
  Reserve a piece of memory for me and name it such-and-such.
  That name is just a label so you can easily refer to it; behind the scenes,
  the computer works with its address."""
  
#include <stdio.h>

int main() {
  char name[] = "Karma"; // در اینجا karma خروجیش مبشه ۶ چون زبان c از null terminator(\0) برای اینکه بدونه یک اسم کجا تموم میشه استفاده میکنه
  int number = 20; // res int == 4   برای بقیه هم اینطوری هست
  /*
    int = 4
    char = 1
    float = 4
    double = 8
  */

  printf("%s size: %zu\n%d size: %zu\n", name, sizeof(name), number,
         sizeof(number));

  return 0;
}
