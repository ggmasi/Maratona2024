#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<char> a(n);
        for(int j = 0; j < n; j++){cin >> a[j];}
        int cont = n;
        for (int j = 0; j < n/2; j++){
            if(a[j] == a[n-j-1]) break;
            else cont -= 2;
        }
        cout << cont << endl;
    }
    
}