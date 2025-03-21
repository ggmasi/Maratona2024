#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n, sum;
    
 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        vector<int> a(2*n);
        for (int j = 0; j < 2*n; j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        for (int j = 0; j < 2*n; j += 2)
        {
            sum += a[j];
        }
        cout << sum << endl;
        
    }
    
}