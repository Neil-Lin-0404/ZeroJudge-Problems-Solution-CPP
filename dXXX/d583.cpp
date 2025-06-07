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
        sort(vec.begin(), vec.end());
        for (auto s : vec)
        {
            cout << s << ' ';
        }
        cout << endl;
    }
    return 0;
}