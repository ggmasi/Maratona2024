#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n = 0;
    cin >> x;
    while (x){
        if(n < x) n = x;
        cin >> x;
    }
    cout << n << endl;
}