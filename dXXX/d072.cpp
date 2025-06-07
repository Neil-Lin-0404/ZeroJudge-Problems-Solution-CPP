#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> y;
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        {
            cout << "Case " << i << ": a leap year" << endl;
        }
        else
        {
            cout << "Case " << i << ": a normal year" << endl;
        }
    }
}