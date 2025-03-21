#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    int k, q;
    cin >> t;
    for(int i = 0; i < t; i++){
        int count = 0;
        cin >> k >> q;
        int n;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> n;
            if(n < a[0]){
                count = n;
            }else{count = a[0]-1;}
            cout << count << " ";
        }
        cout << endl;
        
                 
    }
    
    
}