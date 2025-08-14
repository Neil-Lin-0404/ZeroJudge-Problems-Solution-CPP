#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int m = 0;
        while (n != 0)
        {
            n /= 2;
            m++;
        }
        cout << m << endl;
    }
}