#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tempn = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < tempn; k++)
        {
            cout << '_';
        }
        for(int j = (2*i-1);j>0;j--)
        {
            cout << '*';
        }
        for(int m=1;m<tempn;m++)
        {
            cout << '_';
        }
        cout << endl;
        tempn--;
    }
    return 0;
}