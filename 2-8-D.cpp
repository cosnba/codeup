#include <iostream>
using namespace std;

struct 
{
    int id;
    char name[20];
    int grade1;
    int grade2;
    int grade3;
} s[5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].grade1 >> s[i].grade2 >> s[i].grade3;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << s[i].id << " " << s[i].name << " " << s[i].grade1 << " " << s[i].grade2 << " " << s[i].grade3 << endl;
    }
    return 0;
}