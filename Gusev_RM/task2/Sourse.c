#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	setlocale(LC_ALL, "Russian");;
	int reg, N=1000, ot=0;
	printf("������� ����� ���� 1 ��� 2\n");
	scanf_s("%i", &reg);
	if (reg==1) {
		int n = rand() % (N+1), variant, popytki1=0;
		while (ot == 0) {
			printf("������� ��� ������� ������\n");
			scanf_s("%i", &variant);
			if (variant == n) {
				printf("��������\n");
				printf("��� �������:%i\n", popytki1);
				ot = 1;
			}
			if (variant > n) {
				printf(" ������\n");
				popytki1+=1;
			}
			if (variant < n) {
				printf("������\n");
				popytki1+=1;
			}
		}
	}
	if (reg == 2) {
		printf("���������� �����, � � ��� �������\n");
		printf("� ���� �������� ����� � �� ��������� > - ������, < - ������ ��� = ���� ����� �����\n");
		int ot2 = 0, min = 0, max = 1000, varkomp=0, poytki2=0;
		char chelot='-';
		while (ot2 == 0) {
			varkomp = (min + max) / 2 ;
			printf("%d\n", varkomp);
			scanf_s(" %c", &chelot);
			if (chelot == '=') {
				printf("��� ������\n");
				printf("��� �������: %i\n", poytki2);
				ot2 = 1;
			}
			if (chelot == '>') {
				min = varkomp;
				poytki2 += 1;
			}
			if (chelot == '<') {
				max = varkomp;
				poytki2 += 1;
			}
		}


	}
	system("pause");
}