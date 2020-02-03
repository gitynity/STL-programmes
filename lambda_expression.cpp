#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<string>v6;
v6.push_back("cat");
v6.push_back("elephant");
v6.push_back("lion");
v6.push_back("cheetah");

sort(v6.begin(),v6.end(), [](const string& left , const string& right)
						{	
							return left.size() < right.size();
						});												//lamnda expression	to sort according to length of the strings

for(auto i:v6)
	cout<<i<<endl;

return 0;
}
