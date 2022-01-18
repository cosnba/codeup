#include <stdio.h>

int main()
{
    int a1[2][3], a2[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a1[i][j]);
            a2[j][i] = a1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}