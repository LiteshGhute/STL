#include<bits/stdc++.h>
using namespace std;
main(){
    map<int,string>m;
    m[1] = "abc";
    m[2] = "bcd";
    m[3] = "cbd";
    m.insert({4,"def"});
    // map<int,string>::iterator it;
    // for(it=m.begin(); it!=m.end(); ++it){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<endl;
    
    auto it = m.find(1); //O(log(n))
    m.erase(3);
    if(it == m.end()){
        cout<<"No value found";
    }else{
        cout<<(*it).first<<" "<<(*it).second;
    }

    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    //m.clear();
}