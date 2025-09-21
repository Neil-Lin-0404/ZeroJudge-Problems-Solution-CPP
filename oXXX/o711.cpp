#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,w1,w2,h1,h2;cin >> n >> w1 >> w2 >> h1 >> h2;
	vector<int>change; // 變化量
	/* 
	怎麼知道現在加到哪裡?
	紀錄?
	// ** 保證每次水位上升都是整數。**
	假設w1 = 5, h1 = 5; 總容量 = 5 * 5 * 5
	如果倒120 , 需要125來倒滿 但是保證每次都整數 無條件進位 -> 升高5公分 自動填滿
	先處理單一倒水->
	大於 w1 * w1 * h1 -> 高度 + h1
	再減掉倒入多少ml 再除以w2*w2 
	*/
	int da = w1 * w1,db = w2 * w2;
	int va = da * h1,vb = db * h2;
	for(int i=0;i<n;i++)
	{
		int ml;cin >> ml;
		int granted =0;
		if(ml%va && ml < va && va)
		{
			va -= ((ml/da) + 1) * da;
		}
		change.push_back(granted);
	}
}