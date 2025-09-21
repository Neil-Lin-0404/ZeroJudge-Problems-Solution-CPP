#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int sn;
    cin >> sn; // student numbers
    int scores[sn];
    for (int i = 0; i < sn; i++)
        cin >> scores[i];
    sort(scores, scores + sn);
    if (scores[0] >= 60)
    {
        for (int i = 0; i < sn; i++)
        {
            cout << scores[i];
            if (i == sn - 1)
            {
                cout << '\n';
                continue;
            }
            cout << ' ';
        }
        cout << "best case\n"
             << scores[0];
    }
    else if (scores[sn - 1] < 60)
    {
        for (int i = 0; i < sn; i++)
        {
            cout << scores[i];
            if (i == sn - 1)
            {
                cout << '\n';
                continue;
            }
            cout << ' ';
        }
        cout << scores[sn - 1] << "\nworst case";
    }
    else
    {
        int hba = -1, laa = 101;
        for (int i = 0; i < sn; i++)
        {
            if(scores[i]<60)hba = max(scores[i],hba);
            else laa = min(scores[i],laa); 
            cout << scores[i];
            if (i == sn - 1)
            {
                cout << '\n';
                continue;
            }
            cout << ' ';
        }
        cout << hba << '\n' << laa;
    }
    return 0;
}