#include <stdio.h>

int main() {
    int x = 5;
    int* p = &x;

    printf("x의 초기값: %d\n", x);

    *p = 10;

    printf("x의 값: %d\n", x);
    printf("*p의 값: %d\n", *p);

    return 0;
}
