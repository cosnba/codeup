#include <stdio.h>
#include <string.h>

int main()
{
    int L, M, m1, m2, count;
    while (scanf("%d%d", &L, &M), L != 0 || M != 0)
    {
        count = 0;
        int l[L + 1];
        memset(l, 0, sizeof(l));
        while (M--)
        {
            scanf("%d%d", &m1, &m2);
            for (int j = m1; j <= m2; j++)
            {
                l[j] = 1;
            }
        }
        do
        {
            if (!l[L])
            {
                count++;
            }
        } while (L--);
        printf("%d\n", count);
    }

    return 0;
}