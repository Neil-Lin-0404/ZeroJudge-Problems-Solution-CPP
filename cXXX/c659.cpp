#include <bits/stdc++.h>
using namespace std;
int main()
{
    string conj , noun;
    cin >> conj;
    vector<string>nouns;
    while(cin >> noun)
    {
        nouns.push_back(noun);
    }
    for(int i=0; i < nouns.size(); i++)
    {
        if(i != nouns.size()-1)
        {
            cout << nouns[i] << " "<< conj << " ";
        } else {
            cout << nouns[i];   
        }
    }
}