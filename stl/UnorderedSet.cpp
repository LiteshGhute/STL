/*
Given N strings, find if query present or not
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    unordered_set<string> us;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string st;
        cin>>st;
        us.insert(st);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        string q;
        cin>>q;
        if(us.find(q) != us.end()){
            cout<<"Present";
        }else{
            cout<<"Nope";
        }
    }
}