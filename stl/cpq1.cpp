//monk loves candy (Hackerearth)
#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){

        int n,k;
        cin>>n>>k;

        multiset<long long> m;
        for(int j=0; j<n; j++){
            long long temp;
            cin>>temp;
            m.insert(temp);
        }
        long long count=0;
        for(int l=0; l<k; l++){
            auto last_it = (--m.end());
            long long cand_count = *last_it;
            count += cand_count;
            m.erase(last_it);
            m.insert(cand_count/2);
        }
        cout<<count<<endl;
    }
}