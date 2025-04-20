#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> x >> y;
        int result = (100-((x-0)+(y-0)));
        if(0<result && result <= 30){
            cout << "sad!" << endl;
        }else if(30<result && result <= 60){
            cout << "hmm~~" << endl;
        }else if(60<result && result < 100){
            cout << "Happyyummy" << endl;
        }else {
            cout << "evil!!" << endl;
        }
    }
    return 0;
}