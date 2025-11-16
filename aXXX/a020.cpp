#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin >> s;
    int num;
    vector<int> v = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    num = v[s[0] - 'A'];
    num = (num%10) * 9 + num/10;
    for(int i =1;i<=8;i++)
    {
        num += (s[i]-'0') * (9-i);
        
    }
    num += s[9] - '0';
    cout << ((num%10) ? "fake" : "real");
    return 0;
}