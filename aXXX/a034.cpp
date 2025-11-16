#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int n;
    while(cin >> n && n != EOF){
    string s;
    while(n!=0)
    {
        s += to_string(n%2);
        n/=2;
    }
    reverse(s.begin(), s.end());
    cout << s << '\n';
}
    return 0;
}