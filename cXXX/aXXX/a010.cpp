#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2;i <= sqrt(n);i++){
        while(n%i == 0){
            cout << i << " *";
            n /= i;
        }
    }
}