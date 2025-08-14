#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // 印出 (n - i - 1) 個底線
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "_";
        }

        // 印出 (i + 1) 個加號
        for (int j = 0; j <= i; j++)
        {
            cout << "+";
        }

        cout << endl;
    }

    return 0;
}