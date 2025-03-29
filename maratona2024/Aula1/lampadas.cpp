#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp == 1){
            a = !a;
        }else{
            a = !a;
            b = !b;
        }
    }
    cout << a << endl << b << endl;
}