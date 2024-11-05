#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int score;
    char grade;

  
    printf("점수를 입력하세요 >> ");
    scanf_s("%d", &score);

   
    if (score >= 90 && score <= 100) {
        grade = 'A';
    }
    else if (score >= 80 && score <= 89) {
        grade = 'B';
    }
    else if (score >= 70 && score <= 79) {
        grade = 'C';
    }
    else if (score >= 60 && score <= 69) {
        grade = 'D';
    }
    else if (score >= 0 && score <= 59) {
        grade = 'F';
    }
    else {
        printf("잘못된 점수입니다.\n");
        return 1;
    }

    printf("점수는 %d점이고, 학점은 %c입니다.",score, grade);

    return 0;
}