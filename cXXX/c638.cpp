#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> vec{"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};
    vector<string>vec1{"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"};
    int year;
    while (cin >> year)
        cout << vec1[(year + 6) % 10] << vec[(year + 8) % 12] << endl;
}