#include <iostream>
using namespace std;

int main(){
    int a = 65;
    int n = 5;
    for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            char c = static_cast<char>(a+i);
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}