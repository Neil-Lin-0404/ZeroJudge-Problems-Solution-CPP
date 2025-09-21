#include <bits/stdc++.h>
using namespace std;
// a001 https://zerojudge.tw/ShowProblem?problemid=a001
/* int main(){
    string word;
    cin>>word;

    cout << "hello, " << word;
} */

// a002 https://zerojudge.tw/ShowProblem?problemid=a002

/* int main(){
    int a,b;
    cin >> a >> b;
    int res = a + b;
    cout << res;
} */

// a003 https://zerojudge.tw/ShowProblem?problemid=a003

/* int main() {
    int M;
    int D;
    cin >> M;
    cin >> D;
    int formula = (M*2+D)%3;
    switch(formula){
        case 1:
            cout << "吉";
            break;
        case 2:
            cout << "大吉";
            break;
        case 0:
            cout << "普通";
            break;
        default:
            cout<<"無效";
            break;
    }
} */

// a004 https://zerojudge.tw/ShowProblem?problemid=a004
/* int main(){
    int year;
    cin >> year;
    int res = year % 4;
    if (res == 0){
        std::cout << "Leap Year";
    } else {
        std::cout << "Average Year";
    }
} */
// a005 https://zerojudge.tw/ShowProblem?problemid=a005
/*
int main()
{
    int arrays;
    cin >> arrays;
    for (int i = 0; i < arrays; i++)
    {
        vector<int> vec;
        int r = 0, d = 0;
        bool td = false, tr = false;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        if (vec[1] - vec[0] == vec[2] - vec[1] && vec[2] - vec[1] == vec[3] - vec[2])
        {
            d = vec[1] - vec[0];
            td = true;
        }
        else if (vec[1] / vec[0] == vec[2] / vec[1] && vec[2] / vec[1] == vec[3] / vec[2])
        {
            r = vec[1] / vec[0];
            tr = true;
        }
        if (td == true)
        {
            int n = vec[3] + d;
            vec.push_back(n);
            for (int i = 0; i < 5; i++)
            {
                cout << vec[i] << " ";
            }
        }
        else if (tr == true)
        {
            int n = vec[3] * r;
            vec.push_back(n);
            for (int i = 0; i < 5; i++)
            {
                cout << vec[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
 */
// a006 https://zerojudge.tw/ShowProblem?problemid=a006

/* int main(){
    float a,b,c;
    cout << "Enter three numbers with space between: ";
    cin >> a >> b >> c;
    float judging = b * b - 4 * a *c;
    if(judging < 0){
        cout << "Invalid root";
    } else if (judging == 0) {
        float formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        cout << formula1 << " Double Root";
    } else if(judging > 0){
        float formula1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
        float formula2 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
        cout << "First Root: " << formula1 << " Second Root: " << formula2;
    } else {
        cout << "Invalid Numbers";
    }
    return 0;
} */

// a009 https://zerojudge.tw/ShowProblem?problemid=a009

/* int main(){
    string str;
    getline(cin,str);
    for (int i=0;i<str.size();i++)
        cout<<char(str[i]-7);
} */

// a010  因數分解 https://zerojudge.tw/ShowProblem?problemid=a010 by myself
/*
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " is multiplied by: ";
    for(int i = 2;i <= n;i++){
        while(n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
} */
// a012. 10055 - Hashmat the Brave Warrior
/*
int main() {
long long int a, b;
cin >> a >> b;
cout << abs(a-b);

}
 */
// a022 迴文 https://zerojudge.tw/ShowProblem?problemid=a022
/*
int main(){
    string x;
    cin >> x;
    string tempx = x;
    reverse(x.begin(),x.end());
    if(x== tempx){
        cout << "yes";
    } else {
        cout << "no";
    }
}
 */

// b682. 2. 同學早安 https://zerojudge.tw/ShowProblem?problemid=b682

/*
int main(){
    int H1,M1,H2,M2,RH,RM;
    cin >> H1 >> M1;
    cin >> H2 >> M2;
    if(M2 > M1){
        RM = M2 - M1;
        RH = H2 - H1;
    } else {
        RM = 60 + M2 - M1;
        RH = H2 - 1 - H1;
    }
    cout << (RH >= 0 ? RH : (RH + 24)) << " " << RM;
}
*/
// b884. 電腦教室的傑克 https://zerojudge.tw/ShowProblem?problemid=b884
/*
int main()
{
    int n, x, y;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> x >> y;
        int result = (100-((x-0)+(y-0)));
        if(0<result && result <= 30){
            cout << "sad!" << endl;
        }else if(30<result && result <= 60){
            cout << "hmm~~" << endl;
        }else if(60<result && result < 100){
            cout << "Happyyummy" << endl;
        }else {
            cout << "evil!!" << endl;
        }
    }
    return 0;
}
 */
// b911. 我想跟Kevin借筷子系列4 https://zerojudge.tw/ShowProblem?problemid=b911
/*
int main()
{
    int n;
    while (cin >> n)
    {
        int m = 0;
        while (n != 0)
        {
            n /= 2;
            m++;
        }
        cout << m << endl;
    }
}
 */
// c290. APCS 2017-0304-1秘密差 https://zerojudge.tw/ShowProblem?problemid=c290

// c294. APCS-2016-1029-1三角形辨別 https://zerojudge.tw/ShowProblem?problemid=c294
/*
int main(){
    int array[3];
    for(int i = 0;i<3;i++){
        cin >> array[i];
    }
    sort(array,array+3);
    int a = array[0];
    int b = array[1];
    int c = array[2];
    cout << a <<" "<< b << " " << c << endl;
    cout << (((a+b) <= c)? "No" : ((a*a)+(b*b) < (c*c))? "Obtuse" : ((a*a)+(b*b) == (c*c) ? "Right" : "Acute"));

}
 */
// c296. APCS-2016-1029-3定時K彈  https://zerojudge.tw/ShowProblem?problemid=c296
// THIS ONE IS CHALLENGING BUt NOT HARD
// THINK AS A PROGRAMMER ! TRUST YOURSELF!
// i guess i cant , lol , coming back soon

// c379. 成為出題者 https://zerojudge.tw/ShowProblem?problemid=c379
/*
int main()
{
    int n;
    cin >> n;
    cout << (n*0.3);
    return 0;
}
 */

// c418. Bert的三角形 (1) https://zerojudge.tw/ShowProblem?problemid=c418
/*
int main()
{
    int n;
    cin >> n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}
 */

// c419. Bert的三角形 (2) https://zerojudge.tw/ShowProblem?problemid=c419
/*
int main()
{
    int n;
    cin >> n;
    int tempn = n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<tempn;j++)
        {
            cout << '_';
        }
        for(int k=i;k>0;k--)
        {
            cout << '*';
        }
        cout<<endl;
        tempn--;
    }
    return 0;
}
 */
// c420. Bert的三角形 (3) https://zerojudge.tw/ShowProblem?problemid=c420
/*
int main()
{
    int n;
    cin >> n;
    int tempn = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < tempn; k++)
        {
            cout << '_';
        }
        for(int j = (2*i-1);j>0;j--)
        {
            cout << '*';
        }
        for(int m=1;m<tempn;m++)
        {
            cout << '_';
        }
        cout << endl;
        tempn--;
    }
    return 0;
}
 */
// c461. apcs 邏輯運算子 (Logic Operators) https://zerojudge.tw/ShowProblem?problemid=c461 AND & OR | XOR ^

/*
int main(){
    int a,b,r;
    cin >> a >> b >> r;
    bool changed = false;
    if(a>1)a=1;
    if(b>1)b=1;
    if((a&b) == r){cout << "AND" << endl;changed = true;}
    if((a|b) == r){cout << "OR" << endl;changed = true;}
    if((a^b) == r){cout<<"XOR" << endl;changed = true;}
    if(changed != true){
        cout << "IMPOSSIBLE" << endl;
    }
}
 */
//  c638. 天干地支 https://zerojudge.tw/ShowProblem?problemid=c638

// 1.甲(1904)、2.乙、3.丙(1906)、4.丁、5.戊、6.己、7.庚、8.辛、9.壬、10.癸
// 1.子(1900)、2.丑、3.寅、4.卯、5.辰、6.巳、7.午(1906)、8.未、9.申、10.酉、11.戌、12.亥
// 1906 年 = 丙午
/*
int main()
{
    vector<string> vec{"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};
    vector<string>vec1{"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"};
    int year;
    while (cin >> year)
        cout << vec1[(year + 6) % 10] << vec[(year + 8) % 12] << endl;
} */

// d010 https://zerojudge.tw/ShowProblem?problemid=d010  盈數、虧數和完全數
/*
int main(){
    int n;
while(cin >> n){
    int ans = 0;
    for(int i =1;i<n;i++){
        if(n%i == 0)
            ans += i;
    }
    if(ans > n){
        cout << "盈數\n";
    } else if (ans == n)
    {
        cout << "完全數\n";
    } else {
        cout << "虧數\n";
    }
}
}
 */

// d018. 字串讀取練習 https://zerojudge.tw/ShowProblem?problemid=d018
/* 
int main()
{
    string str;
    while (getline(cin, str))
    { // 使用 getline 讀取整行輸入
        stringstream ss(str);
        string pair;
        double oddSum = 0, evenSum = 0;

        while (ss >> pair)
        { // 逐個讀取 "序號:實數" 格式的資料
            int pos = pair.find(':');
            string indexStr = pair.substr(0, pos);  // 提取序號部分
            string valueStr = pair.substr(pos + 1); // 提取實數部分

            int index = stoi(indexStr);    // 將序號轉為整數
            double value = stod(valueStr); // 將實數轉為浮點數

            if (index % 2 == 0)
            { // 判斷序號是否為偶數
                evenSum += value;
            }
            else
            { // 否則為奇數
                oddSum += value;
            }
        }

        cout << fixed << setprecision(1) << (oddSum - evenSum) << endl; // 輸出結果，保留一位小數
    }
    return 0;
} */
// d049 https://zerojudge.tw/ShowProblem?problemid=d049 中華民國萬歲！
/*
int main(){
    int year = 0;
    cout << "Enter year: ";
    cin >> year;
    cout << (year - 1911);
}
 */

// d050 https://zerojudge.tw/ShowProblem?problemid=d050  妳那裡現在幾點了？
/*
 int main(){
    int TIT = 0;
    cout << "Enter the time in Taiwan: ";
    cin >> TIT;
    int time = TIT - 16;
    if(time < 0){
        time += 25;
    }
    cout << time;

 }
 */

// d051  https://zerojudge.tw/ShowProblem?problemid=d051  糟糕，我發燒了！
/*
double formula(double F, double C){
    C = (F-32) *5 / 9;
    return C;
}
int main(){
    double F;
    double C = 0;
    cin >> F;
    cout << fixed << setprecision(3);
    cout << formula(F,C);
}
 */

// d058 https://zerojudge.tw/ShowProblem?problemid=d058  BASIC 的 SGN 函數
/*
int main(){
    int n;
    cin >> n;
    if(n>0){
        cout << 1;
    } else if(n<0){
        cout << -1;
    } else if (n == 0){
        cout << 0;
    }
}
 */

// d060. 還要等多久啊？ https://zerojudge.tw/ShowProblem?problemid=d060
/*
int main(){
    int m;
    cin >> m;
    cout << (85-m)%60 << endl;
}
 */

// d063. 0 與 1 https://zerojudge.tw/ShowProblem?problemid=d063
/*
 int main(){
    int n;
    cin >> n;
    cout << (n == 0 ? 1 : 0);
 }
 */

// d064. ㄑㄧˊ 數？ https://zerojudge.tw/ShowProblem?problemid=d064
/*
int main(){
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? "Even" : "Odd");
}
 */

// d065. 三人行必有我師 (1 行版) https://zerojudge.tw/ShowProblem?problemid=d065
/*
 int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int max1 = max(a,b);
    int max2 = max(b,c);
    cout << max(max1,max2);
 }
  */

// d066. 上學去吧！ https://zerojudge.tw/ShowProblem?problemid=d066
/*
int main(){
    int h,m;
    cin >> h >> m;
    int time = h*60+m;
    if(time >= 450 and time < 1020){
        cout << "At School";
    } else {
        cout << "Off School";
    }
}
 */

// d067. 格瑞哥里的煩惱 (1 行版) https://zerojudge.tw/ShowProblem?problemid=d067
/*
int main(){
    int year;

    while(cin >> year){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
    return 0;
}
 */

// d068. 該減肥了！ https://zerojudge.tw/ShowProblem?problemid=d068
/*
 int main(){
    int kg;
    while (cin >> kg){
        if(kg >50){ // 體重大於50公斤 , 不包含50公斤
            cout << (kg-=1) << endl; // 會減重一公斤 直接 輸出 kg-= 1
        } else {
            cout << kg << endl; // 如果不大於50公斤 則直接輸出 kg
        }
    }
 }
 */

// d069. 格瑞哥里的煩惱 (t 行版) https://zerojudge.tw/ShowProblem?problemid=d069
/*
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        int year;
        cin >> year;
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}
 */

// d070. 格瑞哥里的煩惱 (0 尾版) https://zerojudge.tw/ShowProblem?problemid=d070
/*
int main(){
    int n;
    while(cin >>n){
        if(n == 0){
            break;
        } else if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}
 */

// d071. 格瑞哥里的煩惱 (EOF 版) https://zerojudge.tw/ShowProblem?problemid=d071
/*
int main(){
    int y;
    while(cin >> y){
        if(y % 4 == 0  && y % 100 != 0 || y % 400 == 0){
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}
 */

// d072. 格瑞哥里的煩惱 (Case 版) https://zerojudge.tw/ShowProblem?problemid=d072
/*
int main(){
    int y,t;
    cin >> t;
    for(int i = 1;i<=t;i++){
        cin >> y;
        if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
            cout << "Case " << i  <<": a leap year" << endl;
        } else {
            cout << "Case " << i << ": a normal year" << endl;
        }
    }
}
 */

// d073. 分組報告 https://zerojudge.tw/ShowProblem?problemid=d073
/*
int main(){
    int n;
    cin >> n;
    int res = n / 3,les = n%3;
    cout << (les == 0 ? res : res + 1) << endl;
}
 */

// d074. 電腦教室 https://zerojudge.tw/ShowProblem?problemid=d074
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << arr[n-1]   << endl;
}
 */

// d086. 態度之重要的證明 https://zerojudge.tw/ShowProblem?problemid=d086
/*
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
 */
// d098. Stringstream運用練習(C++)  https://zerojudge.tw/ShowProblem?problemid=d098
/*
int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    string conv;
    int result = 0;
    while (ss >> conv)
    {
        int num;
        stringstream ss1;
        if(all_of(conv.begin(),conv.end(),::isdigit)){
            ss1 << conv;
            ss1 >> num;
            result += num;
        }

    }
    cout << result << endl;
    return 0;
}
 */
// d124. 3的倍数 https://zerojudge.tw/ShowProblem?problemid=d124
/*
int main() {
    int n;
    while (cin >> n) { // 持續讀入數字，直到 EOF（測試系統可能會提供多行輸入）
        cout << ((n == 0) ? "yes" : ((n % 3 == 0) ? "yes" : "no")) << endl;
    }
    return 0;
}
 */
// d460. 山六九之旅  https://zerojudge.tw/ShowProblem?problemid=d460
/*
int main(){
    int x;
    cin >> x;
    cout << ((x>=0 && x <= 5) ? 0: (x >= 6 && x <=11) ? 590 :(x>=12 && x <= 17) ? 790 :(x >= 18 && x <= 59) ? 890 : 399);
}
 */

// d461. 班際籃球賽 https://zerojudge.tw/ShowProblem?problemid=d461
/*
int main()
{
    int n;
    cin >> n;
    cout << (n-1) << endl;
    return 0;
}
 */
// d483. hello, world   https://zerojudge.tw/ShowProblem?problemid=d483
/*
int main(){
    cout << "hello, world";
    return 0;
}
 */
// d485. 我愛偶數  https://zerojudge.tw/ShowProblem?problemid=d485
/*
int main()
{
    int a,b=0;
    cin>>a>>b;
    cout<<b/2-a/2+(a%2==0);
}
 */
// d489. 伏林的三角地 https://zerojudge.tw/ShowProblem?problemid=d498
/*
int formula(long double a , long double b , long double c)
{
    long double s = ((a+b+c)/2);
    long double sum = sqrt(s *(s-a) * (s-b) * (s-c));
    return round((sum*sum));
}
int main()
{
    long double a=0,b=0,c=0;
    cin >> a >> b >> c;
    long double result = formula(a,b,c);
    cout << fixed << setprecision(0);
    cout << result;
    return 0;
}
 */
// d491. 我也愛偶數 (swap 版) https://zerojudge.tw/ShowProblem?problemid=d491
/*
int main(){
    long long int a =0,b=0,sum=0;
    cin >> a >> b;
    if(a<b){
        int tempa = a;
        a = b;
        b = tempa;
    }
    for(int i = b;i<=a;i++){
        if(i%2 == 0){
            sum +=i;
        }
    }
    cout << sum;
}
 */
// d498. 我不說髒話 https://zerojudge.tw/ShowProblem?problemid=d498
/*
int main(){
    int x;
    cin >> x;
    if(x > 0){
        for(int i =0;i<x;i++){
            cout << "I don't say swear words!" << endl;
        }
    }
}
 */
// d532. 文文的求婚 (三) https://zerojudge.tw/ShowProblem?problemid=d532
/*
int main()
{
    int year1, year2;
    cin >> year1 >> year2;
    int count = 0;
    for (int i = year1; i <= year2; i++)
    {
        if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
 */
// d587. 參貳壹真好吃 https://zerojudge.tw/ShowProblem?problemid=d587
/*
int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i =0;i<n;i++)
    {
        cin >> array[i];
    }
    sort(array,array+n);
    for(int i =0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}
 */
// d559. 班號  https://zerojudge.tw/ShowProblem?problemid=d559
/*

int main()
{
    int n;
    while (cin >> n)
    {
        char idk = '%';
        cout << "'C' can use printf(\"%d\",n); to show integer like " << n;
    }
    return 0;
}
 */
// d562. 山寨版磁力蜈蚣 https://zerojudge.tw/ShowProblem?problemid=d562
/*
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        while (vec.size() >= 1)
        {
            for (int i : vec)
            {
                cout << i << " ";
            }
            cout << endl;
            vec.erase(vec.begin());
            reverse(vec.begin(), vec.end());
        }
        cout << endl;
    }
    return 0;
}
 */
// d649. 數字三角形 https://zerojudge.tw/ShowProblem?problemid=d649
/*
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // 印出 (n - i - 1) 個底線
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "_";
        }

        // 印出 (i + 1) 個加號
        for (int j = 0; j <= i; j++)
        {
            cout << "+";
        }

        cout << endl;
    }

    return 0;
}
 */
// d710. parking lot https://zerojudge.tw/ShowProblem?problemid=d710 SUBMIT WITH JAVA ONLY
/*
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
 */
// d827. 買鉛筆 https://zerojudge.tw/ShowProblem?problemid=d827
/*
int main()
{
    int n;
    cin >> n;
    int result = ((n/12)*50+(n%12)*5);
    cout << result;
    return 0;
}
 */
// d985. Gran Turismo 5 https://zerojudge.tw/ShowProblem?problemid=d985
/*
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int TM = 0, TS = 0;
        int M;
        cin >> M;
        int calb = 0, tempc = 0;
        for (int j = 0; j < M; j++)
        {
            int a, b;
            cin >> a >> b;
            tempc = a * 60 + b;
            if (calb == 0)
            {
                calb = tempc;
            }
            else if (tempc < calb)
            {
                calb = tempc;
            }
            TS = TS + b + a * 60;
        }
        int average = TS / M;
        TS = average % 60;
        TM = average / 60;
        int calbm = calb / 60, calbs = calb % 60;
        cout << "Track " << i << ":" << endl;
        cout << "Best Lap: " << calbm << " minute(s) " << calbs << " second(s)." << endl;
        cout << " Average: " << TM << " minute(s) " << TS << " second(s)." << endl;
    }
    return 0;
}
 */
// e621. 1. 免費停車 (Free Parking) https://zerojudge.tw/ShowProblem?problemid=e621
/*
int main()
{
    // N = 選擇幾天放送優惠
    int N, A, B, C;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A >> B >> C;
        bool free = false;
        for (int i = A + 1; i < B; i++)
        {
            if (i % C != 0)
            {
                cout << i << " ";
                free = true;
            }
        }
        if (free == false)
        {
            cout << "No free parking spaces";
        }
        cout << endl;
    }

    return 0;
}
 */

// e908. 星期幾咧 https://zerojudge.tw/ShowProblem?problem  id=e908
/*
int main(){
    vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    string today;
    cin >> today;
    unsigned int howmany;
    cin >> howmany;
    int curday;
    for (int i = 0; i < 7; i++) {
        if (days[i] == today) {
            curday = i;
            break;
        }
    }
    cout << days[(curday + howmany)%7];
}
 */
