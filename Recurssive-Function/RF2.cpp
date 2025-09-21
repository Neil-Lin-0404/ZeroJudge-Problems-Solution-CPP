#include <iostream>
using namespace std;
#define ll long long
int f(ll n)
{
    if(n <= 1)return n;
    return n * f(n-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    cout << f(n) << "\n";
    return 0;
}