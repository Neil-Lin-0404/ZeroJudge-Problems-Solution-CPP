#include <bits/stdc++.h>
using namespace std;

bool is_square(int num) {
    int sq = sqrt(num);
    return sq * sq == num;
}

int formula(int a, int b, int c) {
    int pos = (b * b - 4 * a * c); // 判斷判別式D
    if (pos < 0) {
        return 0;  // 如果判別式D小於0，沒有實數解
    } else if (pos >= 0 && is_square(pos)) {
        return 1;  // 如果D大於等於0並且是完全平方數，則有有理數解
    } else {
        return 0;  // 否則，沒有有理數解
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        bool tr = formula(a, b, c);
        if (tr) {
            cout << "Yes" << endl;  // 有理數解
        } else {
            cout << "No" << endl;  // 沒有有理數解
        }
    }
    return 0;
}
