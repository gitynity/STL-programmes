#include<bits/stdc++.h>

using namespace std;

int main()
{
	list<int> ls;
	
	ls.push_back(2);		//O(1) time
	ls.push_back(1);		//O(1) time
	ls.push_front(3);		//O(1) time
	ls.push_front(5);		//O(1) time
	return 0;
}


// Famous question on list : 'LRU cache' . check it out
