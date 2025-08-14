#include <bits/stdc++.h>
using namespace std;

int drink;

int height(int v, int a) 
{
	int h = 0;
	
	if (drink == 0)
		return 0;
	
	if (v < 0) {
		h = (drink + v) / a;
		drink = abs(v);
	}
	else {
		h = drink / a;
		drink = 0;
	}
	
	return h;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i, n, max = 0;
	int w1, w2, h1, h2;
	int a1, a2, v1, v2;
	
	cin >> n >> w1 >> w2 >> h1 >> h2;
	
	a1 = w1 * w1;
	a2 = w2 * w2;
	v1 = a1 * h1;
	v2 = a2 * h2;
	
	for (i=0;i<n;i++) {
		cin >> drink;
		
		int h = 0;
		
		if (v1 > 0) {
			v1 = v1 - drink;
			h = height(v1, a1);
		}
		
		if (v2 > 0) {
			v2 = v2 - drink;
			h += height(v2, a2);
		}
		
		if (h > max)
			max = h;
	}
	
	cout << max;

	return 0;
}
