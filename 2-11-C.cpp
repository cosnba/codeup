#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "";
    char s2[20] = "";
    while (scanf("%s%s", s1, s2) != EOF)
    {
        int sum = 0;
        for (int i = 0; i < strlen(s1); i++)
        {
            for (int j = 0; j < strlen(s2); j++)
            {
                sum += (s1[i] - '0') * (s2[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}