#include <bits/stdc++.h>
using namespace std;
int formula(int a,int b,int c)
{
    return ((6*a*b) / (c*c));

}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << formula(a,b,c);
    return 0;
}