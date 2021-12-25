#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    
    for (int i = 1;; i++)
    {
        if (i > N)
        {
            break;
        }
        sum += i;
    }

    printf("%d", sum);
    return 0;
}