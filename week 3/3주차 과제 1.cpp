#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
    int seconds, hours, minutes;

  
    printf("�ʸ� �Է��ϼ���: ");
    scanf_s("%d", &seconds);

 
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;


    printf("��ȯ ����� %d�ð� %d�� %d�� �Դϴ�.\n", hours, minutes, seconds);

    return 0;
}