#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    scanf("%d", &n);
    /*
    A: 二四不同二六同：每一句第二、四個字必須不同平仄，而第二、六個字必須相同平仄
    //
B: 仄起平收：第一句的結尾必須為仄聲，第二句的結尾必須為平聲
C: 上下相對：第一、二句的第二、四、六個字平仄必須不同
    */
    for(int t=0;t<n;t++)
    {
        int datas[14];
        for (int i = 0; i < 14; i++)
            scanf("%d", &datas[i]);
        bool canNone = true;
        if ((datas[1] == datas[3]) || !(datas[8] == datas[12]) || (datas[8] == datas[10]) || !(datas[1] == datas[5]))
        {
            printf("A");
            canNone = false;
        }
        if (!datas[6] || datas[13])
        {
            printf("B");
            canNone = false;
        }
        if (datas[1] == datas[8] || datas[3] == datas[10] || datas[5] == datas[12])
        {
            printf("C");
            canNone = false;
        }
        if (canNone)
        {
            printf("None");
        }
        if (t != n-1)
            printf("\n");
    }
    return 0;
}