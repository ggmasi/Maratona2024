#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n, a, sum;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if(a < 0){
                a = -a;
            }
            sum += a;
        }
        cout << sum << endl;
    }
}