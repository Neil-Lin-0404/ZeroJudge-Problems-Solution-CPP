#include <iostream>
using namespace std;
int f(int n)
{
    cerr << "f( " << n << ")\n";
    if (n <= 1)
        return n;
    return f(n-1)+f(n-2);
}
int main()
{
    cout << f(50);
}