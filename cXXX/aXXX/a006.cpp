#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int judging = b * b - 4 * a *c;
    if(judging < 0){
        cout << "No real root";
    } else if (judging == 0) {
        int formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        cout << "Two same roots x=" << formula1;
    } else if(judging > 0){
        int formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        int formula2 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
        cout << "Two different roots x1=" << formula1 << " , x2=" << formula2;
    }
    return 0;
}