#include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS

int main() {
    int age, number;
    int birth;  // 생일을 숫자로 입력받아 처리

    printf("나이는? ");
    scanf("%d", &age);

    printf("생일은? : ");
    scanf("%d", &birth);

    printf("학번은? ");
    scanf("%d", &number);

    printf("\n===출력===\n");
    printf("나이: %d\n", age);
    printf("생일: %d\n", birth);  // 숫자 형식으로 생일 출력
    printf("학번: %d\n", number);

    return 0;
}