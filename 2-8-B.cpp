#include <iostream>
using namespace std;

struct student
{
    int num;
    char name[20];
    char sex;
    int age;
} s[20];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].num >> s[i].name >> s[i].sex >> s[i].age;
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].num << " " << s[i].name << " " << s[i].sex << " " << s[i].age << endl;
    }
    return 0;
}