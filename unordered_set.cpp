#include<bits/stdc++.h>

using namespace std;

//unordered_set does all opeartions in o(1) average case. 
//However in worst case , it takes O(N) time.
//In competitive programming we mostly use unorderd_set instead  of a set.
//But if a TLE i.e. Time limit exceeded error comes then switch to 'set'
//Or if you are using set and getting a TLE error , switch to unordered_set
//So , you can use any of them but just as you get a TLE , you switch to the other

//when you insert elements in an unordered_set , it is stored in unordered form , not even in the order of insertion

int main()
{
	unordered_set<int> s1;
	s1.insert(2);
	s1.insert(1);
	s1.insert(4);
	s1.insert(3);
	
	for(auto i:s1)
		cout<<i<<endl;
	return 0;
}
