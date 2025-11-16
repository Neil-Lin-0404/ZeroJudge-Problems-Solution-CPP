#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int ts; // test cases
    while (cin >> ts && ts)
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < ts; i++)
        {
            int a;
            cin >> a;
            v.push_back({a % 10, a});
            // 看數字的個位數 然後等等排列 根據題目需求這樣做
        }
        // 先排序 根據pair 第一個值排序
        sort(v.begin(), v.end());
        // 之後再根據pair 第二個值排序
        for (int i = ts; i > 0; i--)
        {
            for (int j = i -1; j >=0; j--)
            {
                if (v[i].first == v[j].first && v[i].second > v[j].second)
                    swap(v[i], v[j]);
            }
        }
        for (int i = 0; i < ts; i++)
            cout << v[i].second << ' '; // 輸出結果
        cout << '\n';
    }
    return 0;
}