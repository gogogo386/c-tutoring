#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[10];
    char studentID[15];

    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", name);

    printf("�й��� �Է��ϼ��� : ");
    scanf("%s", studentID);

    printf("�̸�: %s,�й�: %s\n", name, studentID);
   

    return 0;
}
