#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return
     a;
}
int lcm(int a,int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        int ans = vec[0];
        for (int i = 1; i < n; i++)
        {
            ans = lcm(ans, vec[i]);
        }
        cout << ans << endl;
    }
    return 0;
}