#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int a1,a2,b1,b2,c1,c2,n,y1,y2;
    int MAX=INT_MIN;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    for(int i=0;i<=n;i++)
    {
        y1 = a1 * i * i + b1 * i + c1;
        y2 = a2 * (n-i) * (n-i) +b2 * (n-i) + c2;
        MAX = max(y1+y2,MAX);
    }
    cout << MAX;
}