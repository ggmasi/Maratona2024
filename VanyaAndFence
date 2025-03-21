#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, h;
    int r = 0;
    cin >> n >> h;
    vector<int> alturas(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> alturas[i];
        
    }
 
    for (int i = 0; i < n; i++)
    {
        if(alturas[i] <= h){
            r += 1;
        }
        else{
            r += 2;
        }
    }
    
    cout << r << endl;
    return 0;
}
