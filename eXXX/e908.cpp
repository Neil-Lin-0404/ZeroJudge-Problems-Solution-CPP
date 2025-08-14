#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    string today;
    cin >> today;
    unsigned int howmany;
    cin >> howmany;
    int curday;
    for (int i = 0; i < 7; i++) {
        if (days[i] == today) {
            curday = i;
            break;
        }
    }
    cout << days[(curday + howmany)%7];
}