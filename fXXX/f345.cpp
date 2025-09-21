#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    ll n;scanf("%lld",&n);
    stack<ll>s;
    for(ll i=0;i<n;i++)
    {
        ll x;scanf("%lld",&x);
        s.push(x);
    }
    for(ll i=0;i<n;i++)
    {
        printf("%lld",s.top());
        s.pop();
    }
    return 0;
}