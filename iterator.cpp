#include<bits/stdc++.h>

/*
 
 push_back
 pop_back
 emplace
 size
 capacity
 begin
 end
 rbegin
 rend
 lower_bound
 upper_bound
 empty
 erase

find time complexities and details of all above operations 
*/ 


using namespace std;

int main()
{
	vector<int> vec;
	
	vec = {1,2,3,4,5};
	auto it = vec.begin();	//it is an iterator and it has the adress of the first element of the vector 
	
	cout<<*it<<endl;
	auto it1 = vec.rbegin();	// it1 is an iterator and has the address of last element of the vector .. rbegin = reverse begin 
	
	cout<<*it1<<endl;
	
	auto it2 = vec.end();	// it2 is an iterator and has the address address i.e. just after the last element of the vector 
	cout<<*it2<<endl;
	
	it2--;		//now it2 has the address of the last element of the vector
	
	
	auto it3 = vec.rend();	// it3 is an iterator and has the address just before the first element of the vector .. rend = reverse end 
	
	cout<<*it3<<endl;
	
	it3++;			//now it3 has the address of the first element of the vector
	
	
	vec.erase(vec.begin()); 	//erase: erases a given position from the vector , or a given range of positions from the vector
							
							//erase(vec.position1 , vec.position2)  ---> erases elements from poition1 till position2 - 1
							
	vec.erase(vec.begin() , vec.begin()+2);	//erases element1 an the next element
	
	for(auto it4:vec)			
		cout<<it4;		//Here , it prints elements and not adresses because in the for loop above
						// we are iterating over the integers and not adresses
	
	for(auto it = vec.begin();it!=vec.end();it++)		//here we are iterating over the adresses and not the integers
		cout<<*it;	//therefore we need a dereference operator i.e. *
	
	sort(vec.rbegin(),vec.rend());		//sorts the vector in descending order
	
	
	bool ans = vec.empty();		//returns true is vector empty
		//same as bool ans = (vec.size==0);
	cout<<ans;	
	return 0;
}
