#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
    int seconds, hours, minutes;

  
    printf("초를 입력하세요: ");
    scanf_s("%d", &seconds);

 
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;


    printf("변환 결과는 %d시간 %d분 %d초 입니다.\n", hours, minutes, seconds);

    return 0;
}