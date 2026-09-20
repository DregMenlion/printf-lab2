#include <locale.h>
#include <stdio.h>

void task1()
{
    puts("ЗАДАНИЕ 1");
    puts("");

    printf("123\n");
    printf("1\n2\n3\n");
    printf("1\n\t2\n\t\t3\n");
    printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);

    printf("%10.3f\n", 12.234657);
    printf("%10.5f\n", 12.234657);

    printf("Остаток от деления %d на %d равен %d\n",
        5, 2, 5 % 2);

    printf("%d разделить на %d равно %.2f\n",
        7, 5, 7.0 / 5);

    printf("%d умножить на %d равно %d\n",
        2000, 4, 2000 * 4);

    printf("%g разделить %e равно %f\n",
        5.0, 2000000.0, 5.0 / 2000000.0);

    puts("");
}

void task2()
{
    int N = 15;
    int K = 56;

    puts("ЗАДАНИЕ 2");
    puts("");

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);

    printf("Идет %d минута суток\n",
        N * 60 + K);

    printf("До полуночи осталось %d часов и %d минут\n",
        23 - N, 60 - K);

    printf("С 8.00 прошло %d секунд\n",
        (N - 8) * 3600 + K * 60);

    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n",
        N / 24.0, K / 60.0);

    puts("");
}

void task3()
{
    int n = 13333;
    int L = 4;
    int k = 4;
    int m = 6;

    double result = (double)n / L;

    puts("ЗАДАНИЕ 3");
    puts("");

    printf("Дано:\n");
    printf("%10d\n", n);
    printf("%10d\n", L);

    printf("----------\n");

    printf("Ответ:\n");
    printf("%-+*.*f\n", k + m + 2, m, result);

    puts("");
}

void individual()
{
    double X = 8;
    double S = 240;
    double L = 120;

    double width = L / 100.0;
    double length = S / width;
    double cost = length * X;

    puts("ИНДИВИДУАЛЬНОЕ ЗАДАНИЕ 15");
    puts("");

    printf("Стоимость 1 погонного метра шелка: %.0f золотых\n", X);
    printf("Площадь парусов: %.0f м2\n", S);
    printf("Ширина ткани: %.0f см\n", L);

    printf("Нужно ткани: %.2f погонных метров\n", length);
    printf("Грей заплатил: %.2f золотых\n", cost);

    puts("");
}

int main()
{
    setlocale(LC_ALL, "RUS");

    task1();
    task2();
    task3();
    individual();

    getchar();

    return 0;
}