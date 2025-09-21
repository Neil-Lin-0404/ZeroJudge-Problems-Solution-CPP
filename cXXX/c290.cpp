#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    string s;cin >> s;
    int len = s.length(),es=0,os=0;
    for(int i=0;i<len;i++)
        if(i%2)os+=s[i]-'0';else es+=s[i]-'0';
    cout << abs(os-es);
}