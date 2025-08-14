#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,r;
    cin >> a >> b >> r;
    bool changed = false;
    if(a>1)a=1;
    if(b>1)b=1;
    if((a&b) == r){cout << "AND" << endl;changed = true;}
    if((a|b) == r){cout << "OR" << endl;changed = true;}
    if((a^b) == r){cout<<"XOR" << endl;changed = true;}
    if(changed != true){
        cout << "IMPOSSIBLE" << endl;
    }
}