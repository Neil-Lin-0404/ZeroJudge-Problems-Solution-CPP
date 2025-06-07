#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int oddsum = 0, evensum = 0;
    for(int i =0;i<n.length();i++)
    {
        if(i%2==0)
        {
            evensum += n[i]-'0';
        }
        else
        {
            oddsum += n[i]-'0';
        }
    }
    cout << abs(evensum-oddsum) << endl;
    return 0;
}