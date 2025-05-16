#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tempn = n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<tempn;j++)
        {
            cout << '_';
        }
        for(int k=i;k>0;k--)
        {
            cout << '*';
        }
        cout<<endl;
        tempn--;
    }
    return 0;
}