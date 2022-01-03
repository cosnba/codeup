#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    for (int i = 0; i < 100; i++)
    {
        if (str1[i] == '\n' && str2[i] != '\n')
        {
            printf("%d\n", -str2[i]);
            return 0;
        }
        else if (str1[i] != '\n' && str2[i] == '\n')
        {
            printf("%d\n", str1[i]);
            return 0;
        }
        else if (str1[i] == '\n' && str2[i] == '\n')
        {
            printf("0\n");
            return 0;
        }
        else if (str1[i] != str2[i])
        {
            printf("%d\n", str1[i] - str2[i]);
            return 0;
        }
    }
}