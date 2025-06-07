#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = ((n/12)*50+(n%12)*5);
    cout << result;
    return 0;
}