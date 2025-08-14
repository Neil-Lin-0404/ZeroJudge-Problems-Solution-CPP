#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int TM = 0, TS = 0;
        int M;
        cin >> M;
        int calb = 0, tempc = 0;
        for (int j = 0; j < M; j++)
        {
            int a, b;
            cin >> a >> b;
            tempc = a * 60 + b;
            if (calb == 0)
            {
                calb = tempc;
            }
            else if (tempc < calb)
            {
                calb = tempc;
            }
            TS = TS + b + a * 60;
        }
        int average = TS / M;
        TS = average % 60;
        TM = average / 60;
        int calbm = calb / 60, calbs = calb % 60;
        cout << "Track " << i << ":" << endl;
        cout << "Best Lap: " << calbm << " minute(s) " << calbs << " second(s)." << endl;
        cout << " Average: " << TM << " minute(s) " << TS << " second(s)." << endl;
    }
    return 0;
}