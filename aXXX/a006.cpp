#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cout << "Enter three numbers with space between: ";
    cin >> a >> b >> c;
    float judging = b * b - 4 * a *c;
    if(judging < 0){
        cout << "Invalid root";
    } else if (judging == 0) {
        float formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        cout << formula1 << " Double Root";
    } else if(judging > 0){
        float formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        float formula2 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
        cout << "First Root: " << formula1 << " Second Root: " << formula2;
    } else {
        cout << "Invalid Numbers";
    }
    return 0;
}