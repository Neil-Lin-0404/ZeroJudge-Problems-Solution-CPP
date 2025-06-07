#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int a, b;
    cin >> a >> b;
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % (a + b) >= a)
            ans += b - (tmp % (a + b) - a);
    }
    cout << ans << endl;

    return 0;
}