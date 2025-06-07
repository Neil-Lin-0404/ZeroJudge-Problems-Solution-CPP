#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        int pos = s.find('/');
        int m = stoi(s.substr(0, pos));
        int n = stoi(s.substr(pos + 1));
        m *= 100;
        m += n;
        int date = m;
        if (date >= 121 && date <= 219)
            cout << "水瓶座" << endl;
        else if (date >= 220 && date <= 320)
            cout << "雙魚座" << endl;
        else if (date >= 321 && date <= 420)
            cout << "牡羊座" << endl;
        else if (date >= 421 && date <= 521)
            cout << "金牛座" << endl;
        else if (date >= 522 && date <= 621)
            cout << "雙子座" << endl;
        else if (date >= 622 && date <= 722)
            cout << "巨蟹座" << endl;
        else if (date >= 723 && date <= 821)
            cout << "獅子座" << endl;
        else if (date >= 822 && date <= 923)
            cout << "處女座" << endl;
        else if (date >= 924 && date <= 1023)
            cout << "天秤座" << endl;
        else if (date >= 1024 && date <= 1122)
            cout << "天蠍座" << endl;
        else if (date >= 1123 && date <= 1222)
            cout << "射手座" << endl;
        else
            cout << "摩羯座" << endl;
    }
    return 0;
}