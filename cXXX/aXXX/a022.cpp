#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    string tempx = x;
    reverse(x.begin(), x.end());
    if (x == tempx)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}