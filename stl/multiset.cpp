#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(string value:s)
    cout<<value<<endl;
}
main(){
    multiset<string>s;
    s.insert("abc"); //O(log(n))
    s.insert("hgj");
    s.insert("bcd");
    s.insert("abc");
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    }
    //s.erase("abc");
    print(s);
}