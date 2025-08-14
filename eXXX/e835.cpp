#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,Area,Line,SeatPlace;
    cin >> N;
    if(N<=2500)
    {
        Area=1;
        Line = N / 25 + 1;
        if(N % 25 == 0){
            SeatPlace = 25;
            Line -=1;}
        else
        SeatPlace = N % 25;
    }
    else if(N <= 7500)
    {
        Area=2;
        Line = (N-2500) / 50 +1;
        if(N % 50 == 0){
            SeatPlace = 50;
            Line -=1;}
        else
        SeatPlace = N % 50;
    }
    else 
    {
        Area=3;
        Line = (N-7500)/25+1;
        if(N % 25 == 0){
            SeatPlace = 25;
            Line -=1;}
        else
        SeatPlace = N % 25;
    }
    cout << Area << " " << Line << " " << SeatPlace;
    return 0;

}