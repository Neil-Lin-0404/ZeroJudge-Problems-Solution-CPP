#include <bits/stdc++.h>
using namespace std;
int main(){
    int TIT = 0;
    cout << "Enter the time in Taiwan: ";
    cin >> TIT;
    int time = TIT - 16;
    if(time < 0){
        time += 25;
    }
    cout << time;

 }