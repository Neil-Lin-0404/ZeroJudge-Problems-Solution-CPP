#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<pair<int, string>, int>> v1 = {
        {{1, "Medium Wac"}, 4},
        {{2, "WChicken Nugget"}, 8},
        {{3, "Geez Burger"}, 7},
        {{4, "ButtMilk Crispy Chicken"}, 6},
        {{5, "Plastic Toy"}, 3}};
    vector<pair<pair<int, string>, int>> v2 = {
        {{1, "German Fries"}, 2},
        {{2, "Durian Slices"}, 3},
        {{3, "WcFurry"}, 5},
        {{4, "Chocolate Sunday"}, 7}};
    int n, sum = 0;
    while (cin >> n && n)
    {
        int num;
        cin >> num;
        if (n == 1)
        {
            sum += v1[num - 1].second;
            cout << v1[num - 1].first.second << " " << v1[num - 1].second;
        }
        else
        {
            sum += v2[num - 1].second;
            cout << v2[num - 1].first.second << " " << v2[num - 1].second;
        }
        cout << endl;
    }
    cout << "Total: " << sum;
    return 0;
}