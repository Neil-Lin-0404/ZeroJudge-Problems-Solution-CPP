#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arrays;
    cin >> arrays;
    for (int i = 0; i < arrays; i++)
    {
        vector<int> vec;
        int r = 0, d = 0;
        bool td = false, tr = false;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        if (vec[1] - vec[0] == vec[2] - vec[1] && vec[2] - vec[1] == vec[3] - vec[2])
        {
            d = vec[1] - vec[0];
            td = true;
        }
        else if (vec[1] / vec[0] == vec[2] / vec[1] && vec[2] / vec[1] == vec[3] / vec[2])
        {
            r = vec[1] / vec[0];
            tr = true;
        }
        if (td == true)
        {
            int n = vec[3] + d;
            vec.push_back(n);
            for (int i = 0; i < 5; i++)
            {
                cout << vec[i] << " ";
            }
        }
        else if (tr == true)
        {
            int n = vec[3] * r;
            vec.push_back(n);
            for (int i = 0; i < 5; i++)
            {
                cout << vec[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}