#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "";
    int t;
    int sum = 0;
    int flag = 1;
    while (cin >> s1)
    {
        int n = 0;
        char s2[20] = "";
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] == ',')
            {
                continue;
            }
            s2[n++] = s1[i];
        }
        t = atoi(s2);
        sum += t;
        flag = -flag;

        if (flag == 1)
        {
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
