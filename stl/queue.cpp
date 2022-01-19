#include<bits/stdc++.h>
using namespace std;
main(){
    queue<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }
    
}