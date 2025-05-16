#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool found = true;
    int tempn = n + 1;
    int prime = 0;
    while (found)
    {
        bool br = true;
        for (int i = 2; i <= sqrt(tempn); i++)
        {
            if (tempn % i == 0)
            {
                br = false;
                break;
            }
        }
        if (br)
        {
            found = false;
            prime = tempn;
        }
        tempn++;
    }
    int sqn = sqrt(n); // 先開根號
    if (sqn * sqn <= n)
        sqn++; // 如果平方還小於等於n，就+1
    int sq = sqn * sqn;

    int cbn = cbrt(n); // 先開立方根
    if (cbn * cbn * cbn <= n)
        cbn++; // 如果立方還小於等於n，就+1
    int cb = cbn * cbn * cbn;

    cout << prime << " " << sq << " " << cb << endl;
    return 0;
}