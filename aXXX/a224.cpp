#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        string rs = s;
        reverse(rs.begin(),rs.end());
        if(s==rs)cout << "yes !\n";
        else cout << "no...\n";
    }
}