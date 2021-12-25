#include <stdio.h>

int main()
{
    int n = 100, sum = 0;
    do
    {
        sum += n;
        n--;
    } while (n > 0);
    printf("%d", sum);
    return 0;
}