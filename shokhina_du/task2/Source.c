#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "rus");
	int flag_0 = 1;
	do {
		int flag_1;
		printf("�������� ����� ������ ���������:\n  1. �� ����������� ����� ���������.\n  2. �� ����������� ��������� �����.\n��� �����: ");
		scanf_s("%d", &flag_1);

		// ����� 1
		if (flag_1 == 1) {
			srand(time(NULL));
			int random, count = 0;
			do {
				random = rand() % 1000;
			} while (random == 0);
			printf("\n����� 1.\n��������� �������� �����, ���������� ����! ������� ����� �����: ");
			int answer;
			while (1) {
				scanf_s("%d", &answer);
				if (answer == random) {
					count++;
					printf("����, �� �������� ����� - %d! ����� �������: %d.\n", random, count);
					break;
				}
				else {
					if (answer > random)
						printf("����� ��������� ������ ������. ����� �����: ");
					else
						printf("����� ��������� ������ ������. ����� �����: ");
					count++;
				}

			}
		}

		// ����� 2
		else {
			int number;
			printf("\n����� 2.\n��������� ����� �� 1 �� 1000 - � �� �����! ��������? ������� ��� (�� �� ��������� ���������): ");
			scanf_s("%d", &number);
			int left = 1, right = 999, flag_3, count = 0, answer = 0;
			while (1) {
				printf("���� ����� - %d? (�������� � �������� ������: 1) < / 2) > / 3) = ): ", (left + (right - left) / 2));
				scanf_s("%d", &flag_3);
				switch (flag_3) {
					case 1: {
						right = left + (right - left) / 2;
						break;
					}
					case 2: {
						left = left + (right - left) / 2;
						break;
					}
					case 3: {
						count++;
						printf("����, ��������� �������� ����� - %d! ���������� �������: %d.", number, count);
						answer = (left + (right - left) / 2);
						break;
					}
				}
				if (number == answer) break;
				count++;
			}
		}

		// ����������� ����
		printf("\n������ ���������� ����?\n  1. ��.\n  2. ���.\n��� �����: ");
		scanf_s("%d", &flag_0);
		printf("\n");

	} while (flag_0 == 1);

	return 0;
}