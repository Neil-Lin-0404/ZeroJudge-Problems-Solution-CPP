#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    string conv;
    int result = 0;
    while (ss >> conv)
    {
        int num;
        stringstream ss1;
        if(all_of(conv.begin(),conv.end(),::isdigit)){
            ss1 << conv;
            ss1 >> num;
            result += num;
        }

    }
    cout << result << endl;
    return 0;
}