#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t, n, m;
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cout << min(2, n - 1) * m << endl;
 
       
    }
    return 0;
    
}