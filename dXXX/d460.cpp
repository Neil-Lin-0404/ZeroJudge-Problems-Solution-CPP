#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << ((x>=0 && x <= 5) ? 0: (x >= 6 && x <=11) ? 590 :(x>=12 && x <= 17) ? 790 :(x >= 18 && x <= 59) ? 890 : 399);
}