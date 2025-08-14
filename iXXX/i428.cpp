#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nums,x,y,LD = INT_MIN,SD = INT_MAX;
    vector<pair<int,int>> vec;
    
    cin >> nums;
    for(int i =0;i<nums;i++)
    {
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
        if(i ==0)continue;
        if((abs(vec[i-1].first -vec[i].first) + abs(vec[i-1].second - vec[i].second)) > LD)
        LD = (abs(vec[i-1].first -vec[i].first) + abs(vec[i-1].second - vec[i].second));
        if((abs(vec[i-1].first -vec[i].first) + abs(vec[i-1].second - vec[i].second) < SD))
        SD = (abs(vec[i-1].first -vec[i].first) + abs(vec[i-1].second - vec[i].second));
    }
    cout << LD << ' ' << SD;

    return 0;
}