#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n, answer;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> n;
            if(n){
               
                answer = abs((i - 3)) + abs((j - 3));
            }
        }
        
    }
    cout << answer << endl;
    return 0;
}
