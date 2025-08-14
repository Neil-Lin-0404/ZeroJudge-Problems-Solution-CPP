#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    while(cin >> str) { // 持續讀取直到遇到 "0"
        if(str == "0") {  // 如果是 "0" 就結束
            break;
        }

        int sum = 0;  // 用來儲存字母總和
        bool fail = false; // 用來檢查是否遇到非字母字符

        for(char ch : str) {
            // 如果是字母，計算其對應的數字
            if(isalpha(ch)) {
                // 將字母轉換為小寫並計算對應的數值
                ch = tolower(ch);  // 將字母轉為小寫
                sum += (ch - 'a' + 1); // 'a'是1，'b'是2，依此類推
            } else {
                // 如果是非字母字符，設置fail為true並跳出循環
                fail = true;
                break;
            }
        }

        if(fail) {
            cout << "Fail" << endl;
        } else {
            cout << sum << endl;  // 輸出字母總和
        }
    }
}