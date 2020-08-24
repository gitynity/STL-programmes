#include<bits/stdc++.h>
using namespace std;

struct s
{
    int a;
    int b;
};


int main()
{
    vector<s> v;
    
    v.push_back({1,3});
    v.push_back({4,6});
    v.push_back({18,9});
    v.push_back({2,1});
    v.push_back({8,7});

    for(auto i:v)   //copy of instances of s are changed
        i.a=5;
    
    for(auto i:v)
    {
        cout<<i.a<<" "<<i.b<<endl;
    }

    for(auto &i:v)  //original instances of s are chnaged
        i.a=5;
    
    for(auto i:v)
    {
        cout<<i.a<<" "<<i.b<<endl;
    }
}
