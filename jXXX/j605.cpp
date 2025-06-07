#include <bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin >> K;
    // t 和  s 代表上傳時間和該次上傳的分數
    // 若為嚴重錯誤 s = -1
    // 計算總分 : 提交紀錄中的最高分 - 總提交次數 - 總嚴重錯誤次數 * 2
    int highest = -1;
    int count = K;
    int se = 0;
    int time = -1;
    for (int i = 0; i < K; i++)
    {
        int t, s;
        cin >> t >> s;
        if (s > highest)
        {
            highest = s;
            time = t;
        }
        if (s == -1)
        {
            se++;
        }
    }
    int result = highest - count - se * 2;
    cout << (result >= 0 ? result : 0) << ' ' << time;
    return 0;
}

