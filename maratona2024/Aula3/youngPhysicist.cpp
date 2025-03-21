#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int x, y, z, n;
    int finalX = 0, finalY = 0, finalZ = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        x = 0; y = 0; z = 0;
        cin >> x >> y >> z;
        finalX += x;
        finalY += y;
        finalZ += z;
    }
    if(finalX == 0 && finalY == 0 && finalZ == 0){
        cout << "YES" << endl;
    }
    else{cout << "NO" << endl;}
    return 0;
}