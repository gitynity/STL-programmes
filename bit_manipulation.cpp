#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a=19;
	cout<<(19>>3)<<endl;		// dividing 19 by 2^3 i.e. 8 so 19/8 gives 2
	
	while(a>1)
	{
		cout<<"Hello\n";
		a = a>>1;	//dividing a by 2 each time
	}
	
	while(a<19)
	{
		cout<<"olleH\n";
		a = a<<1;		//multiplying a by 2 each time
	}
	
vector<int>v;

while(a)
{
v.push_back(a%2);
a = a>>1;
}
reverse(v.begin() , v.end());

cout<<"Binary representation of a: \n";
for(auto i:v)
	cout<<i;

return 0;
}

