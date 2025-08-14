#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, D;
    cin >> n >> D;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    bool holding = false;    // 是否持有股票
    int buy_price = 0;       // 買入價格
    int last_sell_price = INT_MAX; // 用最大值表示還沒賣過（因為買入條件是價格 <= last_sell_price - D）
    int profit = 0;

    for (int i = 0; i < n; i++) {
        if (holding) {
            // 持有中，遇到價格高於買入價格 + D，就賣出
            if (ar[i] >= buy_price + D) {
                profit += ar[i] - buy_price;
                last_sell_price = ar[i];
                holding = false;
            }
        } else {
            // 沒持有，遇到價格 <= last_sell_price - D，買入
            if (ar[i] <= last_sell_price - D) {
                buy_price = ar[i];
                holding = true;
            }
        }
    }

    cout << profit << "\n";

    return 0;
}
