#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    stringstream ss(n);
    int num;
    ss >> num;
    cout << num << endl;
}