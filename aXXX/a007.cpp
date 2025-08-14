#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while (true)
    {
        scanf("%lld",n);
        if (n <= 1)
        {
            printf("%s","not");
            continue;
        }
        ll sn = sqrt(n);
        bool isPrime = false;
        for (long long int i = 2; i <= sn; i++)
        {
            if (n % i == 0)
            {
                isPrime = true;
                printf("%s","not");
            }
        }
        if(isPrime)
        printf("%s","yes");
    }

    return 0;
}