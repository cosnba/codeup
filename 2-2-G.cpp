#include <stdio.h>
#include <math.h>

int main()
{
    //n表示每一项，sign表示每一项的正负号
    double n, pi = 0, sign = 1;

    for (int i = 1;; i++)
    {
        n = sign / (2 * i - 1);
        if (fabs(n) < 1e-6)
        {
            break;
        }
        pi += 4 * n;
        sign = -sign;
    }

    printf("PI=%10.8f\n", pi);
    return 0;
}