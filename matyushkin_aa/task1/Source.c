#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ru");
    double DENSITY_DVP = 800, d;
    double DENSITY_DSP = 650;
    double DENSITY_WOOD = 600;  
    double height, width, depth;
    printf("������� ������ ����� (180-220 ��): ");
    scanf_s("%lf", &height);
    printf("������� ������ ����� (80-120 ��): ");
    scanf_s("%lf", &width);
    printf("������� ������� ����� (50-90 ��): ");
    scanf_s("%lf", &depth);

    if (height < 180 || height > 220 || width < 80 || width > 120 || depth < 50 || depth > 90) {
        printf("������: ������� ������� �� ���������� �������.\n");
        return 1;
    }

    height /= 100;
    width /= 100;
    depth /= 100;

    double back_area = height * width;
    double back_volume = back_area * 0.005;
    double back_mass = back_volume * DENSITY_DVP;

    double side_area = height * depth;
    double side_volume = 2 * side_area * 0.015;
    double side_mass = side_volume * DENSITY_DSP;

    double lid_area = width * depth;
    double lid_volume = 2 * lid_area * 0.015;
    double lid_mass = lid_volume * DENSITY_DSP;

    double door_area = height * (width / 2);
    double door_volume = 2 * door_area * 0.01;
    double door_mass = door_volume * DENSITY_WOOD;

    int shelf_count = (int)(height * 100) / 40;
    double shelf_volume = shelf_count * width * depth * 0.015;
    double shelf_mass = shelf_volume * DENSITY_DSP;

    double total_mass = back_mass + side_mass + lid_mass + door_mass + shelf_mass;

    printf("\n����� �����: %.2f ��\n", total_mass);
    printf("�����������:\n");
    printf("- ������ ������: %.2f ��\n", back_mass);
    printf("- ��������: %.2f ��\n", side_mass);
    printf("- ������� � ������ ������: %.2f ��\n", lid_mass);
    printf("- �����: %.2f ��\n", door_mass);
    printf("- ����� (%d ��): %.2f ��\n", shelf_count, shelf_mass);

    scanf_s("%lf", &d);

    return 0;

}