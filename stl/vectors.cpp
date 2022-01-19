#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printVector2(vector<string> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVector(v);

    vector<int> v2(10,1);
    v2.push_back(10);
    printVector(v2);
    v2.pop_back();
    printVector(v2);

    vector<string> sa;
    int m;
    cin>>m;
    
    for(int i=0; i<m; i++){
        string s;
        cin>> s;
        sa.push_back(s);
    }
    printVector2(sa);
}