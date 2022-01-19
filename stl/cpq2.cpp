/*
sort on the basis of marks and then name
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    map<int,multiset<string>> m;
    for(int i=0; i<n; i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }
    auto curr_it = (--m.end());
    while(true){
        auto &students = curr_it->second;
        for(auto st: students){
            cout<<st<<" "<<curr_it->first<<endl;
        }
        if(curr_it == m.begin()){
            break;
        }
        curr_it--;
    }
}