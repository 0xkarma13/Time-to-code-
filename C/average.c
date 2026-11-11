#include <stdio.h>

int score;
int numberarr[100];

void Insert_score() {
    printf("Please Enter numebr of your score: ");
    scanf("%d", &score);

    for (int i = 0; i < score; i++) {
        printf("Number No.%d: ", i);
        scanf("%d", &numberarr[i]);
    }
}

int callave(int array[], int length) {
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum / length;
}

void Print() {
    int sum = 0;

    printf("\n\tYore score: \n");

    for (int i = 0; i < score; i++) {
        printf("\tScore No.%d = %d\n", i, numberarr[i]);
        sum += numberarr[i];
    }

    printf("Your avrage: %d\n", callave(numberarr, score));
}

int main() {
    Insert_score();
    Print();

    return 0;
}
