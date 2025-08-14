#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 2e5 + 10;
ll a[MAXN];
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
            scanf("%lld",&a[i]);
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            printf("%lld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}