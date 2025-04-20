#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        int year;
        cin >> year;
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}