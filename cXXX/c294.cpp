#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    int a=arr[0],b=arr[1],c=arr[2];
    cout << a <<' ' << b<<' ' << c << '\n';
    cout << (((a + b) <= c) ? "No" : ((a*a + b*b) < c*c) ? "Obtuse" : ((a*a + b*b) == c*c) ? "Right" : "Acute");
    return 0;
}