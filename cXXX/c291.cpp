#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 創造一個朋友圈
    vector<int> friends;
    int group = 0;
    // 創建一個大小為n 看那個地方拜訪過沒?
    vector<bool> visited(n, false);
    // 讓使用者輸入所有朋友的朋友
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        friends.push_back(x);
    }
    // ------Core-------
    for (int i = 0; i < n; i++)
    {
        // 看那個地方拜訪過沒?
        // 初始值為 false 所以 !visited[i] 如果還沒被拜訪過就會是true 然後執行
        if (!visited[i])
        {
            // 讓目前拜訪的 = i , 也是到時候進入while迴圈看有沒有拜訪過
            int current =i;
            // 檢查有沒有拜訪過 !true = false , 不執行
            while(!visited[current])
            {
                // 這裡將目前這為人設為已拜訪過
                visited[current] = true;
                current = friends[current];
            }
            group++;
        }
    }
    cout << group;
}