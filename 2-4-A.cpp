#include <stdio.h>

int main()
{
    int n = 100, sum = 0;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    printf("%d", sum);
    return 0;
}