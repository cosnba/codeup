#include <iostream>
#include <cstring>
using namespace std;

struct person
{
    char name[20];
    int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main()
{
    int n;
    char name[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        for (int j = 0; j < 3; j++)
        {
            if (!strcmp(name, leader[j].name))
            {
                leader[j].count++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << leader[i].name << ":" << leader[i].count << endl;
    }
    return 0;
}