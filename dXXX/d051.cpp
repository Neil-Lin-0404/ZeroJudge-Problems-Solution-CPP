#include <bits/stdc++.h>
using namespace std;
double formula(double F, double C){
    C = (F-32) *5 / 9;
    return C;
}
int main(){
    double F;
    double C = 0;
    cin >> F;
    cout << fixed << setprecision(3);
    cout << formula(F,C);
}