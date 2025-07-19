#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int y = 0; y<=n; y++){
        for(int i =0; i<=y; i++){
            cout<<" ";
        for(int j=0; j<=y; j++){
            cout<<"*";
        for(int k = 0; k<=y; k++){
            cout<<"*";
        }
        }
        cout<<endl;
    }
       
    }
    return 0;
}

