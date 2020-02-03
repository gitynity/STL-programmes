#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	vector<string>v;
	
	v.push_back("cat");
	v.push_back("dog");
	v.push_back("ass");
	v.push_back("buffalo");
	v.push_back("hen");
	v.push_back("elephant");
	
	stable_sort(v.begin() , v.end() , [](const string& left  ,const string& right)
									{
										return left.size() < right.size();
									} );
									
	// what stable sort does is: eventhough the word dog cat and ass have same size but in our input we kept cat before dog and dog before ass
	//and this order of input is maintained in stable_sort.(this order is not neccessarily maintained in a typical sort)
	
	for(auto i:v)
		cout<<i<<endl;
			return 0;
}
