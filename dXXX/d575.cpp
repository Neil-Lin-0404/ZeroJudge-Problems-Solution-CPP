#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    long long c1x, c1y,range,c2x, c2y;
    while (cin >> c1x >> c1y >> c2x >> c2y >> range)
    {
        long long total = abs(c2x -c1x)+abs(c2y - c1y);
        cout << ((range < total) ? "alive\n" : "die\n");
    }
    return 0;
}