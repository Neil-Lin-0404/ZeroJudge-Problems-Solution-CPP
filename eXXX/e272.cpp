#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}