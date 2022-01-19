#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(auto val: s){
        cout<<val<<endl;
    }
}
main(){
    set<string> s;
    s.insert("abc");
    s.insert("bcd");
    s.insert("def");
    auto it = s.find("abc");
    if(it != s.end()){
        cout<<*it;
    }
    //print(s);
}