#include <iostream>
using namespace std;
int main(){
    int n = 7;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==0||j==0||i ==n-1||j==n-1){
                cout<<"4";
            }
            if(i==1|| j==1||i==n-2||j==n-2){
                cout<<"3";
            }
            else{
                cout<<" ";
            }
            // if(i==1||j==1||i ==n-2||j==n-2){
            //     cout<<"3";
            // }
            
        }
        cout<<endl;
    }
    return 0;
}