#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    string entrada;
    cin >> entrada;
    vector<int> nums(entrada.length()/2+1);
    int y = 0;
    for (size_t i = 0; i < entrada.length(); i++)
    {
        if(isdigit(entrada[i])){
            nums[y] = entrada[i] - '0';
            y++;
        }
    }
    
    sort(nums.begin(), nums.end());
 
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(i != nums.size() - 1){
            cout << nums[i] << "+";
        }else{
            cout << nums[i] << endl;
        }
    }
    
    
}