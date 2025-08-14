#include <bits/stdc++.h>
using namespace std;
int formula(long double a , long double b , long double c)
{
    long double s = ((a+b+c)/2);
    long double sum = sqrt(s *(s-a) * (s-b) * (s-c));
    return round((sum*sum));
}
int main()
{
    long double a=0,b=0,c=0;
    cin >> a >> b >> c;
    long double result = formula(a,b,c);
    cout << fixed << setprecision(0);
    cout << result;
    return 0;
}