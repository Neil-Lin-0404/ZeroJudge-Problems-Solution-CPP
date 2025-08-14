#include <bits/stdc++.h>
using namespace std;
/* ---分隔線--- */
/* ---分隔線--- */
/* ---分隔線--- */
// 拿取最小值 , check ✅
int mini(long long int a, long long int b, long long int c)
{
    long long int min = INT_MAX;
    if (a < min)
    {
        min = a;
    }
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    return min;
}
/* ---分隔線--- */
/* ---分隔線--- */
/* ---分隔線--- */
// 拿取最大值 , check ✅
int maxi(long long int a, long long int b, long long int c)
{
    long long int max = INT_MIN;
    if (a > max)
    {
        max = a;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}
/* ---分隔線--- */
/* ---分隔線--- */
/* ---分隔線--- */
// 拿取中間值 , check ✅
int mid(long long int a, long long int b, long long int c)
{
    long long int totalVotes = a + b + c;
    long long int mid = totalVotes - maxi(a, b, c) - mini(a, b, c);
    return mid;
}
/* ---分隔線--- */
/* ---分隔線--- */
/* ---分隔線--- */
int main()
{
    long long int a, b, c;
    while (cin >> a >> b >> c)
    {

        long long int totalVotes = a + b + c;
        if (totalVotes - maxi(a, b, c) > maxi(a, b, c))
        {
            long long int mids = mid(a, b, c);
            if (mids == a)
            {
                cout << "A" << endl;
            }
            else if (mids == b)
            {
                cout << "B" << endl;
            }
            else if (mids == c)
            {
                cout << "C" << endl;
            }
        }
        // 如果總票數 - 最大值 但是還是小於最大值 及代表 最min + mid < max , 直接輸出max即可
        if (totalVotes - maxi(a, b, c) < maxi(a, b, c))
        {
            if (maxi(a, b, c) == a)
            {
                cout << 'A' << endl;
            }
            else if (maxi(a, b, c) == b)
                cout << 'B' << endl;
            else if (maxi(a, b, c) == c)
                cout << 'C' << endl;
        }
    }
    return 0;
}