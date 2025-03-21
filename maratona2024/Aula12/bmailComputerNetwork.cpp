#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> p(n-1);
    for (int i = 0; i < n-1; i++){
        cin >> p[i];
    }
    int start = n - 2;
    int vetorResposta[n] = { 0 };
    vetorResposta[0] = n;
    int j = 1;
    while(p[start] != 1){
        vetorResposta[j] = p[start];
        start = p[start] - 2;
        j++;
    }
    j--;
    cout << "1" << " ";
    for (j = j; j > 0; j--){
        cout << vetorResposta[j] << " ";
    }
    cout << vetorResposta[0] << endl;
}