#include <bits/stdc++.h>
using namespace std;
//insertion in vector is costier 
void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(); 
}
void stackcontainer(){
    stack <int> st; 
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    // cout<<st.top();
    cout<<st.size();
    cout<<st.empty();
    // st.pop();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void seekhoq(){
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(4);
    cout<<q.front();
    cout<<q.back();
}
// a set store elements in orderd and unique 
//multiset is similar to set but it can only stores duplicate elements

int main(){
    stackcontainer();
    seekhoq();
   return 0;

}