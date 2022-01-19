#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int> v = {2,3,4,5,6};
    for(int value: v){
        cout<<value<<" ";
    }
    for(auto it = v.begin(); it != v.end(); ++it){
        cout<<*it<<" ";
    }
}