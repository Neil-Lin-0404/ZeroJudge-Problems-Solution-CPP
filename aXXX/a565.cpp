#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i =0; i < n; i++)
    {
        string s;
        cin >> s;
        int len = s.length();
        stack<char> stk;
        for (int j = len - 1; j >= 0; j--)
            stk.push(s[j]);
        int count = 0, bc = 0;
        while (!stk.empty())
        {
            if (stk.top() == 'q')
            {
                if (bc)
                {
                    count++;
                    bc--;
                }
            }
            else if (stk.top() == 'p')
                bc++;
            stk.pop();
        }
        cout << count<<'\n';
    }
    return 0;
}