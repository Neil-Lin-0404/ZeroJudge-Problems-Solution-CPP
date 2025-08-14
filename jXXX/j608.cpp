#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    ll N, K, C = 0;
    scanf("%lld%lld", &N, &K);
    vector<pair<ll, ll>> v(N);
    for (ll i = 0; i < N; i++)
        scanf("%lld", &v[i].first);

    for (ll i = 0; i < N; i++)
        scanf("%lld", &v[i].second);
    sort(v.begin(), v.end(), cmp);
    vector<ll> endTime(K);
    for (ll i = 0; i < K; i++)
        endTime[i] = v[i].second;
    for(int i=0;i<K;i++)
        cerr << "[DEBUG] EndTime " << endTime[i] << '\n';
    for(int i =0;i<N;i++)
        cerr << "[DEBUG] v[i].first, v[i].second " << v[i].first << "," << v[i].second << '\n';
    C += K;
    cerr << "----------------------------------\n";
    for (ll i = 1; i < N; i++)
    {
        cerr << "[DEBUG] v[i].first, v[i].second " << v[i].first << "," << v[i].second << '\n';
        for (int j = 0; j < K; j++)
        {
            if (v[i].first > endTime[j])
            {
                C++;
                endTime[j] = v[i].second;
                cerr << "[DEBUG] EndTime , j " << endTime[j] << "," << j << '\n';
                cerr << "[DEBUG] v[i].first, v[i].second " << v[i].first << "," << v[i].second << '\n';
                break;
            }
        }
    }
    printf("%lld", C);
}