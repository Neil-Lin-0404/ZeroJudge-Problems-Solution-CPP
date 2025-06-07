#include <bits/stdc++.h>
using namespace std;
int main()
{
    // M = 主隊 , S = 客隊
    vector<int> M1,S1,M2,S2;

    // M1
    for(int i=0;i<4;i++)
    {
        int m;
        cin >> m;
        M1.push_back(m);
    }
    
    // S1
    for(int i=0;i<4;i++)
    {
        int m;
        cin >> m;
        S1.push_back(m);
    }

    // M2
    for(int i=0;i<4;i++)
    {
        int m;
        cin >> m;
        M2.push_back(m);
    }

    // S2
    for(int i=0;i<4;i++)
    {
        int m;
        cin >> m;
        S2.push_back(m);
    }

    // sum
    int M1S=0,M2S=0,S1S=0,S2S=0;
    for(int i=0;i<4;i++)
    {
        M1S += M1[i];
        S1S += S1[i];
        M2S += M2[i];
        S2S += S2[i];
    }

    // count 
    int MWC =0,SWC =0;

    // compare
    if(M1S > S1S)
    {
        MWC++;
    }
    else if(M1S < S1S)
    {
        SWC++;
    }
    if(M2S > S2S)
    {
        MWC++;
    }
    else if(M2S < S2S)
    {
        SWC++;
    }


    cout << M1S << ":" << S1S << endl;
    cout << M2S << ":" << S2S << endl;
    // print win/lose/tie
    if(MWC > SWC)
    {
        cout << "Win" << endl;
    }
    else if(MWC < SWC)
    {
        cout << "Lose" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}