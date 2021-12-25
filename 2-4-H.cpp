#include <stdio.h>

int main()
{
    //fa,fb先是表示第一项和第二项，在进入for循环后，fa、fb表示所求项的前两项，f表示所求项
    int fa = 1, fb = 1, f, n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d\n", fa);
    }
    else if (n == 2)
    {
        printf("%d\n", fa + fb);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            f = fa + fb;
            fa = fb;
            fb = f;
        }
        printf("%d", f);
    }
    return 0;
}