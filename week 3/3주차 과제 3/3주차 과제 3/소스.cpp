#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int score;
    char grade;

  
    printf("������ �Է��ϼ��� >> ");
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
        printf("�߸��� �����Դϴ�.\n");
        return 1;
    }

    printf("������ %d���̰�, ������ %c�Դϴ�.",score, grade);

    return 0;
}