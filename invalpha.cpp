#include <iostream>
using namespace std;

int main(){
    int a = 65;
    int n = 5;
    for(int i =n ; i>=0; i--){
        for(int j = 0; j<i; j++){
            char c = static_cast<char>(a+j);
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}