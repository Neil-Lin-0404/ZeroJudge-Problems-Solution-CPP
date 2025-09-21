#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    // m3 = multiplier of 3 , m31 = multiplier of 3 + 1, m32 = multiplier of 3 + 2
    // m3 = 三的倍數 m31 = 三的倍數 + 1, m32 = 三的倍數 + 2
    int m3 = 0,m31 =0,m32 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 3 == 0)
            m3++;
        else if (x % 3 == 1)
            m31++;
        else
            m32++;
    }
    cout << m3 << " " << m31 << " " << m32 << endl;
}