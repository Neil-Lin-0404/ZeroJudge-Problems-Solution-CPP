#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // 有多筆資料 所以用while循環讀取
    while (cin >> n && n != 0)
    {
        // Serial Number 隊伍的編號 ,
        // Members Count 隊伍的成員數量
        int membersCount,curSerialNumber;
        vector<vector<int>> members(n);
        // 讀取每個編號裡面的成員 分隊
        for (int i = 0; i < n; i++)
        {
            cin >> curSerialNumber >> membersCount;
            for (int j = 0; j < membersCount; j++)
            {
                int member;
                cin >> member;
                members[i].push_back(member);
            }
        }
        int getMember;
        cin >> getMember;
        // 找到成員所在的隊伍
        for (int i = 0; i < n; i++)
        {
            // 如果成員在這個隊伍裡面
            if (find(members[i].begin(), members[i].end(), getMember) != members[i].end())
            {
                // 輸出隊伍編號
                cout << i + 1 << endl;
                break; // 找到就跳出循環
            }
        }
    }
    return 0;
}