#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cases, a, b, sum = 0;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cin >> a >> b;
        for(int j = a; j <= b; j++)
        {
            if (j % 2)
            {
                sum += j;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
        sum = 0;
    }
    return 0;
}
