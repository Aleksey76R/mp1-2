#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "Ru");
	int a, b, k, r = 999, l = 1, m = 500;
	char c;
	printf("�������� ����� ���� ");
	scanf_s("%d", &b);
	srand(time(NULL));
	if (b == 1) {
		a = 1 + rand() % 999;
		scanf_s("%d", &k);
		while (a != k) {
			if (k < a)
				printf("���������� ����� ������\n");
			else
				printf("���������� ����� ������\n");
			scanf_s("%d", &k);
		}
		printf("�������\n");
		system("pause");
	}
	else {
		printf("��������� ����� ");
		scanf_s("%d", &k);
		printf("%d\n", m);
		scanf_s(" %c", &c);
		while (c != '=') {
			if (c == '>') {
				l = m + 1;
				m = (l + r) / 2;
			}
			else {
				r = m - 1;
				m = (l + r) / 2;
			}
			printf("%d\n", m);
			scanf_s(" %c", &c);
		}
		printf("��������� �������\n");
		system("pause");
	}
}