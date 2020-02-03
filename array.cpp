#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[] {11,22,13,4,25};
	
	int *begin = &arr[0];
	int *end = &arr[0] + 5;
	sort(begin , end);
	
	for(auto i:arr)
	cout<<i<<endl;
	
	//OR
	
	for(int*p = begin;p!=end;p++)
		cout<<*p<<endl;
	
	sort(begin , end , greater<int>());		//sorted in descending order 
	
	for(int*p = begin;p!=end;p++)
		cout<<*p<<endl;
	
	
	
	return 0;
}
