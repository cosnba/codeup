#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = 'a' + 'z' - str[i];
        }
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = 'A' + 'Z' - str[i];
        }
    }
    puts(str);
    return 0;
}