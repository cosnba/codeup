#include <stdio.h>

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &i[n]);
    }
    for (int i = 0; i < 10; i++)
    {

        if (n[9] < n[i])
        {
            int temp = n[i];
            n[i] = n[9];
            n[9] = temp;
        }
        printf("%d\n", n[i]);
    }
    return 0;
}