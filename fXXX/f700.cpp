#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s;
    for(int i=0;i<s.length();i++)
    {
        if(i == 0)
        {
            cout << endl << '~';
        } else {
            cout << '~';
        }
    }
}