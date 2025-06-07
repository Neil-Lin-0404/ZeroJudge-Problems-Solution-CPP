#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int n;
    while (cin >> n)
    {
        if (n <= 1)
        {
            cout << "非質數" << endl;
            continue;
        }
        int sn = sqrt(n);
        bool isPrime = true;
        for (long long int i = 2; i <= sn; i++)
        {
            if (n % i == 0)
            {
                cout << "非質數" << endl;
                break;
            }
        }
        if (isPrime)
        {
            cout << "質數" << endl;
        }
    }

    return 0;
}