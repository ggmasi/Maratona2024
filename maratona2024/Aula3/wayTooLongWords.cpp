#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main(){
    int n;
    string word;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        words[i] = word;
    }
    for (int j = 0; j < n; j++)
    {
        if(words[j].size() <= 10){
            cout << words[j] << endl;
        }else{
            cout << words[j][0] << words[j].size() - 2 << words[j][words[j].size() - 1] << endl;
        }
    }
    
    
    
    
}