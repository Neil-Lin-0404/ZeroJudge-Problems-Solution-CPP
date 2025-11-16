#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mx;
    cin >> n;
    for (int i = 0; i < n; i++, mx = max(x, mx))
        cin >> x;
    cout << mx;
}