#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) { // 持續讀入數字，直到 EOF（測試系統可能會提供多行輸入）
        cout << ((n == 0) ? "yes" : ((n % 3 == 0) ? "yes" : "no")) << endl;
    }
    return 0;
}