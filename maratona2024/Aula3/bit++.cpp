#include <iostream>
#include <string>
using namespace std;
 
int main(){ 
    int n, x = 0;
    string inputValue;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> inputValue;
        if(inputValue == "++X" || inputValue == "X++"){
            x++;
        }else if(inputValue == "--X" || inputValue == "X--"){
            x--;
        }
    }
    cout << x << endl;
    
}