#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // get cin
    // ❗❗❗❗到時候改為while(cin>>n)❗❗❗❗
    // ❗❗❗❗到時候改為while(cin>>n)❗❗❗❗
    // ❗❗❗❗到時候改為while(cin>>n)❗❗❗❗
    int n,temp;
    while(cin >> n){
    temp =n;
    string str;
    for(int i=0;i<n;i++)
    {
        str += "0";
    }
    cout << str << endl;
    for(int i=1;i<=n;i++)
    {
        str[n-1] = '1';
        for(int j = 0;j<temp;j++)
        {
            if(str[n-i+2] % 2 == 0)
            {
                str[n-i+1] = '0';
                str[n-i] = '1';
                cout << str << endl;
            }
            else
            {
                break;
            }
        }
        temp--;
    }
}

    return 0;
}