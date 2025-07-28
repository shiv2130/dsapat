#include <bits/stdc++.h>
using namespace std;
//pairs
void pairmaker(){
    pair<int, int> p = {1, 4};
    cout<<p.first<<"  "<<p.second<<endl;
    pair<int ,pair<int, int>> pw = {1, {2, 3}};
    cout<<pw.first<<" "<<pw.second.first<<" "<<pw.second.second<<endl;
    pair<int, int> arr[] = {{1, 2},  {3, 4}, {5, 6}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
}

void vectorsmaker(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector <pair<int, int>> v1;
    v1.push_back({1, 2});//->for push back u need to tell that it's a pair
    v1.emplace_back(1,2);//->for emplace back there is nothing like that it detects by itself that it's a pair
    vector <int> v2(5, 100);//-> a vector of size of 5 with element 100 repeated 5 times is decalred
    vector<int> v3(5);// an empty container of 5 space;
    vector<int> v4 (5, 20);//vector of 5 instances of 20 is declared
    vector<int> v5(v4);
    vector<int> v6 = {20, 15, 23, 50, 90, 50, 31};
    //accesing elements
    vector<int>::iterator it = v6.begin();
    it++;
    cout<<*(it)<<" ";
    it = it +2 ;//shifts the iterator directly 2 position ahead
    cout<<*(it)<<" ";
    // vector<int>::iterator it = v6.end();//->end
    // vector<int>::iterator it = v6.rend();//->reverse end
    // vector<int>::iterator it = v6.rbegin();//->reverse begin
    cout<<v6[0]<<" "<<v6.at(0)<<endl;
    cout<<v6.back()<<" "<<endl;
    vector <int> v7 = {20, 34, 59, 21, 39, 10};
    for(vector<int>::iterator it = v7.begin(); it!=v7.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //using auto for iteration 
    for(auto it = v7.begin(); it!=v7.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //deletion in vector
    v2.erase(v6.begin()+2, v.begin()+4);
    for(auto ti = v6.begin(); ti!=v6.end(); ti++){
        cout<<*(ti)<<" ";
    }
    cout<<endl;
    //insertion in vector
    vector<int>v10(2, 100);
    v10.insert(v10.begin(), 300);
    vector <int> v11(2, 50);
    v11.insert(v11.begin(), copy.begin(), copy.end());
}
int main(){
    
    pairmaker();
    vectorsmaker();
    return 0;
}
