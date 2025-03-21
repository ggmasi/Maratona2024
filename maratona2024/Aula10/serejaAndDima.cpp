#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int esq = 0, dir = n-1;
    int sereja = 0, dima = 0;
    int turn = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[esq] > a[dir]){
            if(turn == 0){
                sereja += a[esq];
                turn = 1;
                esq++;
            }else{
                dima += a[esq];
                turn = 0;
                esq++;
            }
        }else{
            if(turn == 0){
                sereja += a[dir];
                turn = 1;
                dir--;
            }else{
                dima += a[dir];
                turn = 0;
                dir--;
            }
        }
    }
    
    cout << sereja << " " << dima << endl;
    
}