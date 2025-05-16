#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year1, year2;
    cin >> year1 >> year2;
    int count = 0;
    for (int i = year1; i <= year2; i++)
    {
        if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}