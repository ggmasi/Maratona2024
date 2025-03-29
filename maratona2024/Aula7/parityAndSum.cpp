#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin >> t;
    for (long long int i = 0; i < t; i++){
        long long int n, nPares = 0, maiorImpar = 0, add = 0;
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> pares;
        for (long long int j = 0; j < n; j++){
            cin >> a[j];
            if(!(a[j]%2)){
                nPares++;
                pares.push_back(a[j]);
            }else{
                if(a[j] > maiorImpar) maiorImpar = a[j];
            }
        }
        if(nPares == 0 || nPares == n) cout << 0 << endl;
        else{
            sort(pares.begin(), pares.end());
            for (long long int j = 0; j < nPares; j++){
                if(pares[j] < maiorImpar) maiorImpar += pares[j];
                else add = 1;
            }
            if(add) cout << nPares + 1 << endl;
            else cout << nPares << endl;    
        }
        
    }
    
}
