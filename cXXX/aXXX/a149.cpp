
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)  // 修正：跑 T 次
    {
        string str;
        cin >> str; // 修正：把字串輸入進來

        int sum = 1;
        for (int i = 0; i < str.length(); i++)
        {
            int n = str[i] - '0'; // 直接將字元轉數字
            sum *= n;
        }

        cout << sum << endl;
    }
    return 0;
}
