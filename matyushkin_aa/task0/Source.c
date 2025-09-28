#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ru");
    double x1, y1, r1;
    double x2, y2, r2;

    printf("������� ���������� ������ ������ ���������� (x1 y1): ");
    scanf_s("%lf %lf", &x1, &y1);
    printf("������� ������ ������ ����������: ");
    scanf_s("%lf", &r1);

    printf("������� ���������� ������ ������ ���������� (x2 y2): ");
    scanf_s("%lf %lf", &x2, &y2);
    printf("������� ������ ������ ����������: ");
    scanf_s("%lf", &r2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
        printf("���������� �� ������������\n");
    }
    else if (distance < fabs(r1 - r2)) {
        printf("���� ���������� ������ ������\n");
    }
    else if (distance == fabs(r1 - r2)) {
        printf("���������� �������� �������\n");
    }
    else if (distance == r1 + r2) {
        printf("���������� �������� �������\n");
    }
    else {
        printf("���������� ������������ � ���� ������\n");
    }

    return 0;
}