#include <stdio.h>
#include <string.h>

void rev(char s[])
{
    int n = strlen(s) - 1;
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
}

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    rev(s);
    puts(s);
    return 0;
}