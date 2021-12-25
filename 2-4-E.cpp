#include <stdio.h>

int main()
{
    int N = 0, sum = 0;

    while (sum < 1000)
    {
        N++;
        sum += N;
    }

    printf("%d", N);
    return 0;
}