#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>

void main()
{
    srand(time(NULL));
    char* locale = setlocale(LC_ALL, "");
    int a=0, b, c=1, d=0;
    int choice;
    char ch;
    do
    {
        printf("����� 1: �� ����������� ����� \n");
        printf("����� 2: �� ����������� ����� \n");
        printf("����� 0: ����� �� ���� \n");
        printf("�������� ����� \n");
        a = 0;
        scanf_s("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            printf("���� ���������");
            break;
        }
        case 1:
        {
            a = rand() % 1000;
            b = 100000;
            while (b != a)
            {
                printf("������� �����\n");
                scanf_s("%d", &b);
                if ((b > 0) && (b < 1000))
                {
                    if (b < a)
                        printf("���������� ����� ������\n");
                    if (b > a)
                        printf("���������� ����� ������\n");
                }
                else
                    printf("������ �����\n");
            }
            printf("�� ��������!\n");
            break;
        }
        case 2:
        {
            printf("��������� ����� �� 1 �� 1000\n");
            printf("���� ���������� ����� ������ ������� >\n");
            printf("���� ���������� ����� ������ ������� <\n");
            printf("���� ���������� ����� ����� ������� =\n");
            b = 1000;
            do
            { 
                d =c+ rand() % (b - c + 1);
                printf("%d\n", d);
                scanf_s(" %c", &ch);
                switch (ch)
                {
                case '>':
                    c = d + 1;
                    break;
                case '<':
                    b = d - 1;
                    break;
                case '=':
                    printf("���� ����� ��������\n");
                    a = 12345678;
                    break;
                }
            }while (a < 12345678);
            break;
        }
        }
    } while (choice != 0);
}




