#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double X = 8;
    double S = 240;
    double L = 120;

    double width = L / 100.0;
    double length = S / width;
    double cost = length * X;

    printf("Стоимость 1 погонного метра красного шелка: %.0f золотых.\n", X);
    printf("Общая площадь парусов: %.0f м2.\n", S);
    printf("Ширина ткани в рулоне: %.0f см.\n", L);
    printf("Потребуется %.2f погонных метров ткани.\n", length);
    printf("Грей заплатил %.2f золотых.\n", cost);

    return 0;
}
