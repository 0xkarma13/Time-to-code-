#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char password[] = "Karma";

  if (argc <= 1 )
  {
      printf("You should enter the password\n");
      return 1;
  }

  // If the user password does not meet the standard
  if (strlen(argv[1]) >= 99 || strlen(argv[1]) == 0) {
    return 1;
  }

  if (strcmp(password, argv[1]) == 0) {
    printf("Welcome to your own project\n");
  } else {
    printf("Sorry The password incorrect\n");
  }

  return 0;
}


