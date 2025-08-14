#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count = 0, hc = 0;
    char hch;
    string str;
    while (cin >> str)
    {

        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            if (!i)
                continue;
            if (str[i - 1] == str[i] && !count)
                count += 2;
            else if (str[i - 1] == str[i])
                count++;
            else if (str[i - 1] != str[i])
                count = 0;
            if (count > hc)
            {
                hc = count;
                hch = str[i];
            }
        }
        cout << hch << ' ' << hc<<endl;
    }
    return 0;
}