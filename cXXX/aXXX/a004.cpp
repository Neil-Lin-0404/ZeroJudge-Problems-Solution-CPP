#include <bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin >> year;
    int res = year % 4;
    if (res == 0){
        std::cout << "Leap Year";
    } else {
        std::cout << "Average Year";
    }
}