#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "rus");
	double x1, y1, x2, y2, r1, r2;
	printf("������� ���������� ���1 (����� ������): ");
	scanf_s("%lf %lf", &x1, &y1);
	printf("������� ���������� ���2 (����� ������): ");
	scanf_s("%lf %lf", &x2, &y2);
	printf("������� ������� ���1 � ���2 (����� ������): ");
	scanf_s("%lf %lf", &r1, &r2);
	double s = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);

	if (s == 0)
	{
		if (r1 == r2)
			printf("���������� ���������");
		else
		{
			if (r1 > r2)
				printf("���2 ����� ������ ���1, � � ��� ��������� ������");
			else
				printf("���1 ����� ������ ���2, � � ��� ��������� ������");
		}
	}
	else
	{
		if (s > r1 + r2)
			printf("���������� �� ������������");
		else
		{
			if (s == r1 + r2)
				printf("���������� ������������ � 1 �����");
			else
			{
				if (s == fabs(r1 - r2))
				{
					if (r1 > r2)
						printf("���2 ����� ������ ���1, � ��� ����� 1 ����� �����");
					else
						printf("���1 ����� ������ ���2, � ��� ����� 1 ����� �����");
				}
				else
				{
					if (s < fabs(r1 - r2))
					{
						if (r1 > r2)
							printf("���2 ����� ������ ���1");
						else
							printf("���1 ����� ������ ���2");
					}
					else
						printf("���������� ������������ � 2 ������");
				}
			}
		}
	}
	getchar();
	getchar();
}
