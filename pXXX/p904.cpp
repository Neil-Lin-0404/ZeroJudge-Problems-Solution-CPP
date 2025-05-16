#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double discount = 1;
    if (N >= 11 && N <= 20)
    {
        discount = 0.95;
    }
    else if (N >= 21 && N <= 40)
    {
        discount = 0.9;
    }
    else if(N > 40)
    {
        discount = 0.85;
    }

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        result += x;
    }
    int res = round(result * discount);
    if (res < 1200)
    {
        cout << res << endl;
    }
    else
    {
        cout << 1200;
    }
    return 0;
}