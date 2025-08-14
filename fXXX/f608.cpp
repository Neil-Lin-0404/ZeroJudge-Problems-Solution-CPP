#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    ll n;scanf("%lld",&n);
    ll curX=0,curY=0,count=0;
    for(ll i=0;i<n;i++)
    {
        ll x,y;scanf("%lld%lld",&x,&y);
        if(x >= curX && y >= curY)
        {
            curX = x;
            curY = y;
            count++;    
        }
    }
    cout << count <<'\n';
    return 0;
}