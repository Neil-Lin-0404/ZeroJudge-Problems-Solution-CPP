#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 這裡我搞不懂他給我c要幹嘛 但是 我一直過不了 誤打誤撞就過了 哈哈
    ios::sync_with_stdio(0);
    int a,b,c;cin >> a >> b >> c;
    if(a >= 1) a=1;if(b >=1) b =1;
    bool printed = false;
    if((a&&b)==c){cout << "AND\n";printed=true;}
    if((a || b)==c){ cout << "OR\n";printed=true;}
    if((a != b)==c) {cout << "XOR\n";printed=true;}
    if(!printed)cout << "IMPOSSIBLE\n";
}