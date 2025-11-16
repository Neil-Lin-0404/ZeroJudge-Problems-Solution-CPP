#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int main()
{
    int n, dir;
    cin >> n >> dir;
    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    int direction[4] = {0,1,2,3};
    int curX = n/2+1,curY=n/2+1;
    // 0 = left , 1 = up , 2 = right , 3 = down
    for(int i=0;i<n-2;i++)
    {
        for(;;)
        {
            if(i)
        }

    }
}