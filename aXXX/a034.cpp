#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int n;
    while(cin >> n){
    vector<int>v;
    while(n!=0)
    {
        v.push_back(n%2);
        n/=2;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    cout << '\n';
    
}
    return 0;
}