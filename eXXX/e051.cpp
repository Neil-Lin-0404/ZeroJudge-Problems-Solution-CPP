#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int length = str.length();
    for(int i =1;i<length-1;i++)
    {
        str[i] = '_';
    }
    cout << str;
    return 0;
}