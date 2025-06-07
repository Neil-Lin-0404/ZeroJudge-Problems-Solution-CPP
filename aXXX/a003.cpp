#include <bits/stdc++.h>
using namespace std;
int main() {
    int M;
    int D;
    cin >> M;
    cin >> D;
    int formula = (M*2+D)%3;
    switch(formula){
        case 1:
            cout << "吉";
            break;
        case 2:
            cout << "大吉";
            break;
        case 0:
            cout << "普通";
            break;
    }
}