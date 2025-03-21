#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> points(3);
    cin >> points[0] >> points[1] >> points[2];
    sort(points.begin(), points.end());
    int d = points[1] - points[0] + points[2] - points[1];
    cout << d << endl;
}