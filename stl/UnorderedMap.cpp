/*
Given N strings and Q queries.
In each query you are given a string
print frequency of that string
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    int N;
    cin>>N;
    unordered_map<string,int> um;
    for(int i=0; i<N; i++){
        string st;
        cin>>st;
        um[st]+=1;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        string query;
        cin>>query;
        cout<<um[query]<<endl;
    }

}