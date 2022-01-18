#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], s3[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    fgets(s3, 100, stdin);
    int cmp = strcmp(s1, s2);
    if (cmp > 0)
    {
        cmp = strcmp(s1, s3);
        if (cmp > 0)
        {
            puts(s1);
        }
        else
        {
            puts(s3);
        }
    }
    else
    {
        cmp = strcmp(s2, s3);
        if (cmp > 0)
        {
            puts(s2);
        }
        else
        {
            puts(s3);
        }
    }

    return 0;
}