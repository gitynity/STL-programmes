#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(41);
	v.push_back(21);
	v.push_back(1);
	v.push_back(11);
	
	auto i = find(v.begin() , v.end() , 1);		// find does linear search on sequence containers and takes O(N) in worst case.
	
	if(i == v.end())
		cout<<"Not found";
	else
		cout<<*i<<" is at position "<<(i - v.begin());		
	
	
	map<int , string> m;
	
	m[1] = "cat";
	m[4] = "dog";
	m[2] = "elephant";
	
	auto j = m.find(4);		// for associative containers , find takes logN time
	
	if(j == m.end())
		cout<<"Not found";
	else
		cout<< j->first <<" has value "<< j->second;
	
	return 0;
}
