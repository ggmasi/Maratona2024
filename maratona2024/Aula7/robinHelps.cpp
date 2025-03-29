#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k, h = 0;
        cin >> n >> k;
        int g = 0;
        for (int j = 0; j < n; j++){
            int p;
            cin >> p;
            if(p >= k){
                g += p;
            }else if(p == 0 && g > 0){
                g--; h++;
            } 
        }
        cout << h << endl;
    }
    
}