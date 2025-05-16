#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " is multiplied by: ";
    for(int i = 2;i <= n;i++){
        while(n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
}