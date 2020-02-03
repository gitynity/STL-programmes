#include<bits/stdc++.h>

using namespace std;

 	
//priority_queue is not lifo or fifo
//it stores elements in descending order by default  ..... uses maxheap
//to store elements in descending order , use comparator 
//  priority_queue<int,vector<int>,greater<int>> pq;     ...... minheap

//can be used for problems where we need to find the greatest , second greatest elements
int main()
{
	priority_queue<int> pq;
	pq.push(1);
	pq.push(7);
	pq.push(5);
	
	//stored as 7->5->1
	pq.pop();			//pops 7	
	
	pq.push(3);		//5->3->1	inserted at right place in logn time
	
	
	priority_queue<int,vector<int>,greater<int>> pq1; 	//stores in ascending order , dont ask why

	pq1.push(1);
	pq1.push(7);
	pq1.push(5);

	cout<<pq1.top();
	
	return 0;
}

