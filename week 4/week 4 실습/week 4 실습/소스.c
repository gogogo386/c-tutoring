#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num[3];
	int i;
	int sum = 0;

	printf("3���� ������ �Է��ϼ��� >>> ");

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 3; i++) {
		sum = sum + num[i];
	}
	printf("�迭�� �� : %d", sum);
	return 0;
}

