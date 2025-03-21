#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string str;
    cin >> str;
    
    int r = 0;
    int frequency[26] = {0};
 
    for (char c : str)
    {
        if (frequency[c - 'a'] == 0)
        {
            r++;
        }
        frequency[c - 'a']++;
    }
    
    
    
    if(r % 2 == 1){
        cout << "IGNORE HIM!" << endl;
    }
    else{cout << "CHAT WITH HER!" << endl;}
}