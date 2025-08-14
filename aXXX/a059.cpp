#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nums, a, b, cur = 0,sum = 0;
    cin >> nums;
    while (cur != nums)
    {
        cin >> a >> b;
        double da = sqrt(a);
        int ia = sqrt(a);
        if (da > ia)
        {
            for (int i = sqrt(a)+1; i <= sqrt(b); i++)
                sum += i * i;
        }
        else
        {
            for (int i = sqrt(a); i <= sqrt(b); i++)
                sum += i * i;
        }
        cur++;
        cout << "Case " << cur << ": " << sum << "\n";
    }
    return 0;
}