#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >>n){
        if(n == 0){
            break;
        } else if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}