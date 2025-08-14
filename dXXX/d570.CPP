#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length()-1;
    for(int i=n;i>=0;i--)
    {
        cout << str << endl;
        str[i] = ' ';
    }
    return 0;
}