#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, totalSum = 0;
    cin >> n;
    vector<pair<ll, ll>> getDatas(n);
    
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        getDatas[i] = {a, b};
    }

    
    sort(getDatas.begin(), getDatas.end());

    
    ll curL = getDatas[0].first;
    ll curR = getDatas[0].second;

    for (ll i = 1; i < n; i++) {
        ll nextL = getDatas[i].first;
        ll nextR = getDatas[i].second;

        if (nextL <= curR) {
            
            curR = max(curR, nextR);
        } else {
            
            totalSum += (curR - curL);
            curL = nextL;
            curR = nextR;
        }
    }

    
    totalSum += (curR - curL);

    cout << totalSum << "\n";
    return 0;
}