#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int ispace = 0; 
    for(int i = n; i>=0; i--){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<ispace ; j++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        ispace = ispace+2;
        cout<<endl;
    }
    ispace = 8;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<ispace ; j++){
            cout<<" ";
        }
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        ispace = ispace-2;
        cout<<endl;
    }
    return 0;
}