#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, r;
    vector<char> color(n);
 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> color[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (color[i+1] == color[i])
        {
            r++;
        }
        
        
    }
    cout << r << endl;
    return 0;
    
}