#include <bits/stdc++.h>
using namespace std;

// THIS IS JAVA ONLY
int main()
{
    while (1)
    {
        int n, m; // n = how many cars , m = indication
        cin >> n >> m;
        vector<string> brand;
        vector<string> color;
        for (int i = 0; i < n; i++)
        {
            string b, c;
            cin >> b >> c;
            brand.push_back(b);
            color.push_back(c);
        }

        for (int i = 0; i < m; i++)
        {
            string ind, cho; // ind = 要指啥 , cho = choose 選擇啥條件
            cin >> ind >> cho;
            if (ind == "brand")
            {
                for (int i = 0; i < n; i++)
                {
                    if (brand[i] == cho)
                    {
                        cout << brand[i] << " " << color[i] << endl;
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (color[i] == cho)
                    {
                        cout << brand[i] << " " << color[i] << endl;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}