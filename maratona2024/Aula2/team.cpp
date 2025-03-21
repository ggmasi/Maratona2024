#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int p, r;
    vector<int> s(3);
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int t = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
            if(s[i] == 1){
                t++;
            }
            
        }
        if(t >= 2){
            r++;
        }
    }
    cout << r << endl;
    return 0;
    
}