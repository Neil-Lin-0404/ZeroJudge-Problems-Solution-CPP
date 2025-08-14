#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    // n = 機器人數量 然後每個格子的所需花費時間 , m = tasks
    /*
    10 3
    2 5 6 5-2+1 = 4 -> 1 2 3 4
    3 6 4 6-3+1 = 4 -> 5 6 7 8
    7 8 1 8-7+1 = 2 -> 9 10
    1 2 3 4 5 6 7 8 9 10
    6 + 12 + 18 + 24 = 60
    20 + 24 +28 +32 = 104
    9 + 10 = 19
    60 + 104 + 19 = 183
    */
    for (int i = 0; i < m; i++)
    {
        ll l,r,w;scanf("%lld%lld%lld", &l, &r, &w);

    }
}