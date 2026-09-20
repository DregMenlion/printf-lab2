#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
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
