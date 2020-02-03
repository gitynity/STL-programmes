#include<bits/stdc++.h>

using namespace std;

//top
//push
//pop
//size
//clear
//empty

int main()
{
	stack<int> s;
	s.push(3);
	s.push(4);
	s.push(1);
	s.push(2);
	s.pop();
	
	cout<<s.top();
	return 0;
}
