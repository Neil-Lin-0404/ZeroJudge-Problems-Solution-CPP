#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int count = 0;
    for(int i = sqrt(a);i<=sqrt(b);i++)
    {
        bool prime = true;
        for(int j = 1;j<=i;j++)
        {
            if(i%j==0)
            {
                prime = false;
            }
        }
        if(prime)
        {
            count++;
        }
    }
    cout << count << endl;
}