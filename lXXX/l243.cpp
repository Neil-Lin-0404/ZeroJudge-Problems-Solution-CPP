#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;scanf("%lld",&n);
    int a[n];
    for(ll i = 0;i < n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    ll sum=0;
    for(ll i = n;i >=1;i--)
        sum += a[n-i] * i;
    printf("%lld",sum);
    return 0;
}