#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << a <<" "<< b << " " << c << endl;
    cout << (((a+b) <= c)? "No" : ((a*a)+(b*b) < (c*c))? "Obtuse" : ((a*a)+(b*b) == (c*c) ? "Right" : "Acute"));

}