/*
Given N strings, print unique strings in
lexiographical order with their frequency
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int N;
    cin>>N;
    map<string,int> m;
    for(int i=0; i<N; i++){
        string st;
        cin>>st;
        // if(m.find(st) == m.end()){
        //     m[st] = 1;
        // }
        // else{
        //     m[st] += 1;
        // }
        m[st] += 1;
    }
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}