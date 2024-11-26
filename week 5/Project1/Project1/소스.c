#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    double average;

    printf("5명의 학생 점수를 입력하세요:\n");
    for (int i = 0; i < 5; i++) {
        printf("학생 %d 점수: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = sum / 5.0;

    printf("학생들의 평균 점수: %.2lf\n", average);

    return 0;
}
