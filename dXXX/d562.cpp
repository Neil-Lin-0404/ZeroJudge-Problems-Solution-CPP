#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        while (vec.size() >= 1)
        {
            for (int i : vec)
            {
                cout << i << " ";
            }
            cout << endl;
            vec.erase(vec.begin());
            reverse(vec.begin(), vec.end());
        }
        cout << endl;
    }
    return 0;
}