#include <iostream>
using namespace std;
int main(){
    int n =4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        for(int z = n; z>i; z--){
            cout<<" ";
            cout<<" ";
        }
        // for(int y= n; y>i; y--){
        //     cout<<" ";
        // }
        for(int k = i; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}