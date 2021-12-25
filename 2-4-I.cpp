#include <stdio.h>

int main()
{
    //a为分子,b为分母
    double a = 2, b = 1, sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum += a / b;
        a = a + b;
        b = a - b;
    }
    printf("%.6f\n", sum);
    return 0;
}