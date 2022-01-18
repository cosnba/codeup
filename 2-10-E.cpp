#include <stdio.h>

int main()
{
    int n, m, t;
    scanf("%d", &n);
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &t);
            sum[i] += t;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sum[i]);
    }
    return 0;
}