#include <iostream>
using namespace std;

const int maxn = 1000;
int a[maxn];
int main()
{
    int n, odd = 0, even = 0;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (even > odd)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}