#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, m;
    while (cin >> c >> m)
    {
        int count = 0;
        count += c;
        while (c / m != 0)
        {
            count += c / m; // 3 , 4
            c = c / m + c % m; // 10/3 = 3 + 10%3 = 1 , 3 +1=4 => 4/3 = + , 4%3 = 1 => 1+1=2
        }
        cout << count << endl;
    }
    return 0;
}