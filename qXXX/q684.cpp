#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    string a = "APPEND",B = "PREPEND",C = "INSERT",D = "DELETE",E = "REPLACE",F = "REVERSE",G="SLICE",s;
    int n;

    cin >> s >> n;
    
    for(int i=0;i<n;i++)
    {
        string op;
        cin >> op;
        if(op == a)
        {
            string x;
            cin >> x;
            s += x;
        }
        else if(op == B)
        {
            string x;
            cin >> x;
            s = x + s;
        }
        else if(op == C)
        {
            int pos;
            string x;
            cin >> pos >> x;
            s.insert(pos, x);
        }
        else if(op == D)
        {
            int pos, len;
            cin >> pos >> len;
            s.erase(pos, len);
        }
        else if(op == E)
        {
            int pos, len;
            string x;
            cin >> pos >> len >> x;
            s.replace(pos, len, x);
        }
        else if(op == F)
        {
            reverse(s.begin(), s.end());
        }
        else if(op == G)
        {
            int start, end;
            cin >> start >> end;
            cout << s.substr(start, end - start + 1) << endl;
        }

    }
}