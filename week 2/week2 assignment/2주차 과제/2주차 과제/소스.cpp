#include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS

int main() {
    int age, number;
    int birth;  // ������ ���ڷ� �Է¹޾� ó��

    printf("���̴�? ");
    scanf("%d", &age);

    printf("������? : ");
    scanf("%d", &birth);

    printf("�й���? ");
    scanf("%d", &number);

    printf("\n===���===\n");
    printf("����: %d\n", age);
    printf("����: %d\n", birth);  // ���� �������� ���� ���
    printf("�й�: %d\n", number);

    return 0;
}