#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int sum=0;
    cin >> n;
    int len = n.length();
    for(int i=0;i<len;i++)
    {
        int x = n[i] -  '0';
        sum += x;
    }
    if(stoi(n) % sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}