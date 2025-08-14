#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
while(cin >> n){
    int ans = 0;
    for(int i =1;i<n;i++){
        if(n%i == 0)
            ans += i;
    }
    if(ans > n){
        cout << "盈數\n";
    } else if (ans == n)
    {
        cout << "完全數\n";
    } else {
        cout << "虧數\n";
    }
}
}