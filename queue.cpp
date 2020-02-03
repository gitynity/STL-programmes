#include<bits/stdc++.h>

using namespace std;

//front
//push
//pop
//size
//clear
//empty

int main()
{	queue<int> q;
	q.push(3);
	q.push(4);
	q.push(2);
	q.push(1);
	
	q.pop();
	cout<<q.front();
	return 0;
}

