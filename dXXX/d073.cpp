#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int res = n / 3,les = n%3;
    cout << (les == 0 ? res : res + 1) << endl;
}