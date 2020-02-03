#include<bits/stdc++.h>


//map is a <key , value> pair 
//map is always kept sorted. And map is kept sorted in the ascending order of the keys.
using namespace std;

int main()
{
	map<int,int> mpp;
	mpp[1]++;
	mpp[1]++;
	mpp[1]++;
	mpp[1]++;
	
	cout<<mpp[1]<<endl;	//number of occurences of 4
	
	// if(mpp.count(1)==0) 		-->1 does not exist
	// if(mpp.count(1)>0)      --> 1 exists
	
	mpp[1] = 5;
	mpp[2] = 10;
	
	auto it1 = mpp.find(3);
	auto it2 = mpp.find(2);
	
	cout<<(*it1).first<<" "<<(*it1).second<<endl;
	
	cout<<(*it2).first<<" "<<(*it2).second<<endl;
	
	mpp.clear();	//clears the entire map
	
	
	map< pair<int,int> , int> mpp1;
	
	mpp1[{4,3}]++;
	mpp1[{4,3}]++;
	mpp1[{4,3}]++;
	
	if(mpp1.find({4,3})==mpp1.end())
		cout<<"Not present\n";
	else
		cout<<"count = "<<mpp1[{4,3}]<<endl;
		
		
//Question: Given a string 's' , find the count of all vowels and print them  like vowel -> count

//example: google
//	a->0
//	e->1
//	i->0
//	o->2
//	u->0
 		
string s = "hello"; 		
map<char , int>mpp2;

for(auto i:s)
	mpp2[i]++;

for(auto it:{'a','e','i','o','u'})
	cout<<it<<" -> "<<mpp2[it]<<endl;

	return 0;
}
