#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
	char* locale = setlocale(LC_ALL, "");
	int num=20,zag,otg=0,count,a=1001,b=1;
	char cha;
	do
	{
	count = 0;
	printf("�������� ����� ����\n0 ����� �� ����\n1�� ����������\n2�� �����������\n��� �����:");
	scanf_s('%i', &num);
	switch (num)
		{
			case 0:
			{
			printf("������� �� ����!");
			break;
			}
			case 1:
			{
				zag = 1 + rand() % 1000;
				while (zag != otg)
				{
					printf("�������� �������������:");
					scanf_s("%d", &otg);
					count++;
					if (otg < zag)
						printf("���������� ����� ������");
					else
						if (otg > zag)
							printf("���������� ����� ������");

				}
				printf("�� ��������!������������� �������: %d",count);
			}
			case 2:
			{
				printf("��������� ����� �� 1 �� 1000: ");
				scanf_s("%d", &zag);
				cha = "";
				while (cha!='=')
				{
					otg = b + rand() % (a-b+1);
					printf("�� �������������: %d\n��� ������?������?�����?",otg);
					scanf_s("%c", &cha);
					count++;
					switch (cha)
					{
						case '<':
							b = otg;
							break;
						case '>':
							a = otg;
							break;
						case '=':
							printf("� ������� �����! � ���� ���������� �� %d �������", count);
							break;

					}

				}

			}
		}
	} while ( num != 0);

}