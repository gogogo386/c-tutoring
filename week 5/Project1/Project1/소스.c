#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    double average;

    printf("5���� �л� ������ �Է��ϼ���:\n");
    for (int i = 0; i < 5; i++) {
        printf("�л� %d ����: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = sum / 5.0;

    printf("�л����� ��� ����: %.2lf\n", average);

    return 0;
}
