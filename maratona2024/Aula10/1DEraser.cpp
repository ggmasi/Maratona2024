#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int k, n, count = 0;
        cin >> n >> k;
        vector<char> s(n);
        for (int j = 0; j < n;j++){
            cin >> s[j];
        }
        for (int j = 0; j < n; j++){
            if(s[j] == 'B'){
                for (int l = 0; l < k && l + j < n; l++){
                    s[l+j] = 'W';
                }
                j += k-1;
                count++; 
            }
        }
        cout << count << endl;
        
    }
    
}