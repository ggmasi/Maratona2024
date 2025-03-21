#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 
int Count();
 
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int c = Count();
        cout << c << endl;   
    }
    
}
 
int Count(){
    int n;
    cin >> n;
    int coins = 0, isThorn = 0, canContinue = 1;
    char caminho = ' ';
    
    for (int j = 0; j < n; j++){
        cin >> caminho;
        if(canContinue){
            if(caminho == '@'){
            isThorn = 0;
            coins++;
            }else if(caminho == '*'){
                if(isThorn) canContinue = 0;
                else isThorn = 1;
            }else isThorn = 0;
        }
        
    }
    return coins;
}