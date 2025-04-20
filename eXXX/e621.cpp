#include <bits/stdc++.h>
using namespace std;
int main()
{
    // N = 選擇幾天放送優惠
    int N, A, B, C;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A >> B >> C;
        bool free = false;
        for (int i = A + 1; i < B; i++)
        {
            if (i % C != 0)
            {
                cout << i << " ";
                free = true;
            }
        }
        if (free == false)
        {
            cout << "No free parking spaces";
        }
        cout << endl;
    }

    return 0;
}