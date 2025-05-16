#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H1, M1, H2, M2, RH, RM;
    cin >> H1 >> M1;
    cin >> H2 >> M2;
    if (M2 > M1)
    {
        RM = M2 - M1;
        RH = H2 - H1;
    }
    else
    {
        RM = 60 + M2 - M1;
        RH = H2 - 1 - H1;
    }
    cout << (RH >= 0 ? RH : (RH + 24)) << " " << RM;
}