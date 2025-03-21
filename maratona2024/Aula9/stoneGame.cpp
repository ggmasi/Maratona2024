#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int maior = -1, menor = 101;
        int maiorIndex, menorIndex;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if(a[j] > maior){
                maior = a[j];
                maiorIndex = j;
            }
            if(a[j] < menor){
                menor = a[j];
                menorIndex = j;
            }
        }
        int leftToRight = max(maiorIndex, menorIndex) + 1;
        int rightToLeft = n - min(maiorIndex, menorIndex);
        int smallLeftbigRight = menorIndex + (n - maiorIndex) + 1;
        int smallRightbigLeft = maiorIndex + (n - menorIndex) + 1;
        cout << min({leftToRight, rightToLeft, smallLeftbigRight, smallRightbigLeft}) << endl;
 
        
    }
    return 0;
}