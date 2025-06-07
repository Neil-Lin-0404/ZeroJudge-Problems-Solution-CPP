#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        string str;
getline(cin, str);

stringstream ss(str);
int sum =0;
int n;
while(ss >> n)

    sum += n;

cout << sum << endl;
    }
}