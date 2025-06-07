#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = 0;
    vector<int> maxed;

    // 取得每組的最大值
    for (int i = 0; i < n; i++) {
        int MaxValue = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            MaxValue = max(MaxValue, x);
        }
        total += MaxValue;
        maxed.push_back(MaxValue);
    }

    // 輸出總和
    cout << total << endl;

    // 找出能整除 total 的數
    vector<int> divisible;
    for (int i = 0; i < n; i++) {
        if (total % maxed[i] == 0) {
            divisible.push_back(maxed[i]);
        }
    }

    // 輸出整除結果
    if (divisible.empty()) {
        cout << -1;
    } else {
        for (int i = 0; i < divisible.size(); i++) {
            if (i > 0) cout << " ";
            cout << divisible[i];
        }
    }

    return 0;
}
