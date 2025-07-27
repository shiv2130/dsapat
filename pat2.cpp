#include <iostream>
using namespace std;
int main(){
    int n =5;
    int ispace = 8;
    for(int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<ispace; j++){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        ispace = ispace-2;
        cout<<endl;
    }
    ispace = 1;
    for(int i =n; i>0; i--){
        for(int j =0; j<i-1; j++){
            cout<<"*";
        }
         for(int j = 0; j<=ispace; j++){
            cout<<" ";
        }
        for(int j =0; j<i-1; j++){
            cout<<"*";
        }
        ispace = ispace+2;
        cout<<endl;
    }
    return 0;
}