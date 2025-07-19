#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = n; i>=0; i--){
        for(int j = 0; j<=i; j++){
            cout<<" ";
        }
        for(int k = n; k>=i; k--){
            cout<<"*";
        }
        for(int z = n; z>i; z--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}