#include <iostream>
using namespace std;
int walk(long long steps, long long taken)
{
    if (steps == 1)
    {
        cout << "You had taken " << taken << " steps.\n";
        return 0;
    }
    cout << "You had taken " << taken << " steps.\n";
    if (taken == steps || steps <= 0)
        return 0;
    return walk(steps, taken + 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long steps;
    cin >> steps;
    walk(steps, 1);
    return 0;
}