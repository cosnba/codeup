#include <iostream>
using namespace std;

struct
{
    int num;
    char name[10];
    char sex;
    char job;
    union
    {
        int class_;
        char position[10];
    } category;
} p[100];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].num >> p[i].name >> p[i].sex >> p[i].job;
        if (p[i].job == 's')
        {
            cin >> p[i].category.class_;
        }
        else
        {
            cin >> p[i].category.position;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i].num << " " << p[i].name << " " << p[i].sex << " " << p[i].job << " ";
        if (p[i].job == 's')
        {
            cout << p[i].category.class_ << endl;
        }
        else
        {
            cout << p[i].category.position << endl;
        }
    }
    return 0;
}