#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,m;
    cin >> h >> m;
    int time = h*60+m;
    if(time >= 450 and time < 1020){
        cout << "At School";
    } else {
        cout << "Off School";
    }
}