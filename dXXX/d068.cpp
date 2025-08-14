#include <bits/stdc++.h>
using namespace std;
int main(){
    int kg;
    while (cin >> kg){
        if(kg >50){ // 體重大於50公斤 , 不包含50公斤
            cout << (kg-=1) << endl; // 會減重一公斤 直接 輸出 kg-= 1
        } else {
            cout << kg << endl; // 如果不大於50公斤 則直接輸出 kg
        }
    }
 }