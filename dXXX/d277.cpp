#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        cout << ((n % 2 == 0) ? n : n - 1) << endl;
    }
    return 0;
}