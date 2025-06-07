/* 
解題思路:
1. 讀入一個整數 T，表示測試案例的數量。 ✅
2. 輸入一個數字為string ✅
3. 拆分為一個一個數字 轉換為 int 
3 : How do i do it

4. 乘到sum 裡面 再輸出sum
*/
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
