#include <bits/stdc++.h>
using namespace std;
int main()
{
    int kg;
    double height;
    cin >> kg >> height;
    double bmi = kg / (height * height);
    cout << fixed << setprecision(1) << bmi << endl;
    return 0;
}