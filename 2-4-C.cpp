#include <stdio.h>

int main()
{
    int sum = 0;
    for (int n = 100; n > 0; n--)
    {
        sum += n;
    }
    printf("%d", sum);
    return 0;
}