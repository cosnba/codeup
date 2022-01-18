#include <stdio.h>
#include <string.h>

void sort(char *&x, char *&y)
{
    if (strcmp(x, y) > 0)
    {
        char *t = x;
        x = y;
        y = t;
    }
}

int main()
{
    char a[20], b[20], c[20];
    fgets(a, 20, stdin);
    fgets(b, 20, stdin);
    fgets(c, 20, stdin);
    char *p1 = a, *p2 = b, *p3 = c;
    sort(p1, p2);
    sort(p1, p3);
    sort(p2, p3);
    fputs(p1, stdout);
    fputs(p2, stdout);
    fputs(p3, stdout);
    return 0;
}