#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", a[i - 1]);
    }
    return 0;
}