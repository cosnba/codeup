#include <stdio.h>

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }
    return 0;
}