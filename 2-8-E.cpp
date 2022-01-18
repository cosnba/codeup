#include <iostream>
#include <iomanip>
using namespace std;

struct
{
    int id;
    char name[20];
    int grade1;
    int grade2;
    int grade3;
} s[10];

int main()
{
    int sumGrade1 = 0;
    int sumGrade2 = 0;
    int sumGrade3 = 0;
    int avg[10];
    int maxAvg = 0;
    int maxAvgIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].grade1 >> s[i].grade2 >> s[i].grade3;
        avg[i] = (s[i].grade1 + s[i].grade2 + s[i].grade3) / 3;
        if (avg[i] > maxAvg)
        {
            maxAvg = avg[i];
            maxAvgIndex = i;
        }
        sumGrade1 += s[i].grade1;
        sumGrade2 += s[i].grade2;
        sumGrade3 += s[i].grade3;
    }
    cout << fixed << setprecision(2) << (float)sumGrade1 / 10 << " " << fixed << setprecision(2) << \
    (float)sumGrade2 / 10 << " " << fixed << setprecision(2) << (float)sumGrade3 / 10 << endl;
    cout << s[maxAvgIndex].id << " " << s[maxAvgIndex].name << " " << s[maxAvgIndex].grade1 << " "\
         << s[maxAvgIndex].grade2 << " " << s[maxAvgIndex].grade3 << endl;
    return 0;
}