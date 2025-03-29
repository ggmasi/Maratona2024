#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        int x = (a[0] + a[1])/2;
        for (int j = 2; j < n; j++){
            x = (x+a[j])/2;
        }
        cout << x << endl;
    }
    
}