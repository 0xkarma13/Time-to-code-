"""this is my first code with c"""
  
#include <stdio.h>

int age = 18;
int score = 16;
int grade = 9;



void ShowMessage(){
    printf("Welcome to c programming\n");
}


int main(){
    ShowMessage();

    printf("age: %d\nscore: %d\ngrade: %d\n", age, score, grade);

    if (grade >= 10){
        printf("Passed\n");
    }

    else {
        printf("Failed\n");
    }

    if (score == 20){
        printf("Excellent\n");
    }
    else if (score <= 19 && score >= 10){
        printf("Passed\n");
    }
    else if (score < 10){
        printf("Failed\n");
    }


    return 0;


}

