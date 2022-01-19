#include<bits/stdc++.h>
using namespace std;

bool comfnx(pair<int,int>a, pair<int,int>b){
    if(a.first != b.first){
        if(a.first > b.first) return true;
        return false;
    }else{
        if(a.second < b.second) return true;
        return false;
    }
}
main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        pair<int,int> temp;
        cin>>temp.first>>temp.second;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),comfnx);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}