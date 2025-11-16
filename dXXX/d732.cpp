#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ll l = 0, r = n - 1;
        ll mid;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] == x)
            {
                cout << mid+1 << '\n';
                found = true;
                break;
            }
            else if (v[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(!found) cout <<  0 << '\n';
    }
    return 0;
}