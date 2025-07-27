#include <iostream>
using namespace std;

int main(){
    int n = 5;
    // int b = 1;
    for(int i = 0; i<n; i++){
        for(char c = 'E'-i; c<='E'; c++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}