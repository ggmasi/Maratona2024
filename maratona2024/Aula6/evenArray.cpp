#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, erradoI = 0, erradoP = 0;
        cin >> n;
        vector<int> nums(n);
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
        }
 
        for (int j = 0; j < n; j++)
        {
            if(nums[j]%2 != j%2){
                if(j%2 == 0){
                    erradoP++;
                }else{erradoI++;}
            }
            
        }
        if(erradoI == erradoP){
            cout << erradoI << endl;
        }else{cout << "-1" << endl;}
    }
    
}