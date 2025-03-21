#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k, r, count = 1;
    cin >> k >> r;
    int sub = k;
    while(k%10 != r && k%10 != 0){
        count++;
        k += sub;
    }
    cout << count << endl;
}