#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) { // 使用 getline 讀取整行輸入
        stringstream ss(str);
        string pair;
        double oddSum = 0, evenSum = 0;

        while (ss >> pair) { // 逐個讀取 "序號:實數" 格式的資料
            int pos = pair.find(':');
            string indexStr = pair.substr(0, pos); // 提取序號部分
            string valueStr = pair.substr(pos + 1); // 提取實數部分

            int index = stoi(indexStr); // 將序號轉為整數
            double value = stod(valueStr); // 將實數轉為浮點數

            if (index % 2 == 0) { // 判斷序號是否為偶數
                evenSum += value;
            } else { // 否則為奇數
                oddSum += value;
            }
        }

        cout << fixed << setprecision(1) << (oddSum - evenSum) << endl; // 輸出結果，保留一位小數
    }
    return 0;
}