#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a =0,b=0,sum=0;
    cin >> a >> b;
    if(a<b){
        int tempa = a;
        a = b;
        b = tempa;
    }
    for(int i = b;i<=a;i++){
        if(i%2 == 0){
            sum +=i;
        }
    }
    cout << sum;
}