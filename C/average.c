#include <stdio.h>
int score;
int numberarr[100];

void Insert_score() {
  printf("Please Enter number of your score: ");
  scanf("%d", &score);
  for (int i = 0; i < score; i++) {
    printf("Number No.%d: ", i);
    scanf("%d", &numberarr[i]);
  }
}

void Print() {
  float sum = 0;
  printf("\n\tYour score: \n");
  for (int i = 0; i < score; i++) {
    printf("\tScore No.%d = %d\n", i, numberarr[i]);
    sum += numberarr[i];
  }

  printf("Your average: %f\n", sum / score);
}

int main() {
  Insert_score();

  Print();
}
