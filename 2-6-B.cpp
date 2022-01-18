#include <stdio.h>
#include <string.h>

void vowels(char s1[], char s2[])
{
    int l = strlen(s1) - 1;
    int n = 0;
    for (int i = 0; i < l; i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
            s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
        {
            s2[n++] = s1[i];
        }
        s2[n] = '\0';
    }
}

int main()
{
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    vowels(s1, s2);
    puts(s2);
    return 0;
}