#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int *p[3] = {&a, &b, &c};
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - 1 - i; j++)
        {
            if (*p[j] < *p[j + 1])
            {
                int temp = *p[j];
                *p[j] = *p[j + 1];
                *p[j + 1] = temp;
            }
        }
    }
    printf("%d %d %d\n", *p[0], *p[1], *p[2]);
    return 0;
}