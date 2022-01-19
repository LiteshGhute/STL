#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct = count(v.begin(),v.end(),3);
    cout<<ct<<endl;
    int it = *find(v.begin(), v.end(),2);
    reverse(v.begin(),v.end());
}