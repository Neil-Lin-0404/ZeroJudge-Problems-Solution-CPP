#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    while(n!=0)
    {
        long long int hp;
        cin >> hp;
        long long int gh;
        cin >> gh;
        long long int hrs;
        cin >> hrs;
        cout << (hp +gh*hrs) << endl;
        n--;
    }
    return 0;
}