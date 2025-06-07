/*
-----------------------
1 4     3 6
2 5 =>  2 5
3 6     1 4 , 翻轉 flip
-----------------------
3 6     1 2 3
2 5 =>  4 5 6
1 4             , 旋轉 spin

[0][0],[0][1]       [2][0],[1][0],[0][0]
[1][0],[1][1] =>    [2][1],[1][1],[0][1]
[2][0],[2][1]

-----------------------
 */
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> flip(vector<vector<int>> &A, int r, int c) // 翻轉
{
    vector<vector<int>> B = A; // 暫定一個矩陣 B = A
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            B[i][j] = A[r-i-1][c-j-1]; // 將 A 的每一個數字都翻轉
        }
    }
    return B;
}
vector<vector<int>> spin(vector<vector<int>> &A, int r, int c) // 旋轉
{
    vector<vector<int>> B = A; // 暫定一個矩陣 B = A
    for(int i = 0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            B[i][j] = A[j][i];
        }
    }
    return B;
}
int main()
{
    int r, c, m; // r = 有r行(line) / 每一行都包含 c 個數字 / m 代表對矩陣操作的次數
    cin >> r >> c >> m;
    vector<vector<int>> matrix(r, vector<int>(c)); // 宣告一個 r 行 c 列的矩陣
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j]; // 讀入矩陣的每一個數字
        }
    }
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (k == 1) // 旋轉
        {
            matrix = flip(matrix, r, c); // 將旋轉後的矩陣賦值給 matrix
        }
        else if (k == 0) // 翻轉
        {
            matrix = spin(matrix, r, c); // 將翻轉後的矩陣賦值給 matrix
            swap(r, c); // 交換 r 和 c 的值
        }
    }
    cout << r << " " << c << endl; // 輸出矩陣的行數和列數
    for(int i =0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            cout << matrix[i][j] << " "; // 輸出矩陣的每一個數字
        }
        cout << endl; // 換行
    }
    return 0;
}