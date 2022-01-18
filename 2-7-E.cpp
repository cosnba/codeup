#include <stdio.h>

void scan(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p + i);
    }
}

void change(int *p)
{
    int *min, *max, temp;
    min = max = p;

    for (int i = 0; i < 10; i++)
    {
        if (*(p + i) < *min)
        {
            min = p + i;
        }
        if (*(p + i) > *max)
        {
            max = p + i;
        }
    }
    temp = *min;
    *min = *p;
    *p = temp;
    temp = *max;
    *max = *(p + 9);
    *(p + 9) = temp;
}

void print(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main()
{
    int a[10];
    int *p = a;
    scan(p);
    change(p);
    print(p);
    return 0;
}