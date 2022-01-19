/*
Given N strings, print unique strings
in lexiograhical order
*/

#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto val: s){
        cout<<val<<endl;
    }
}

main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string st;
        cin>>st;
        s.insert(st);
    }
    print(s);

}