#include <bits/stdc++.h>
using namespace std;
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