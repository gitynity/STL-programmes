#include<bits/stdc++.h>

using namespace std;

/*
 insert
 size
 emplace
 find
 count
 begin
 end
 empty
 rbegin
 rend
 lower_bound
 upper_bound
 
find time complexities and details of all above operations 
*/ 


//Note: Set does all operations in logn time
//set stores the value in sorted order (increasing by default)
//also if you want to store in descending order , you can use the 'comparator'
	// set<int , greater<int>> s5;
	//however after storing the elements in descending order , now you cannot apply lower_bound() obviously :)
int main()
{
	set<int> s1;
	
	s1.insert(4);	//takes logn time to insert
	s1.insert(1);
					//set stores elements in ascending order and stores no duplicates
	for(auto it:s1)
	cout<<it;
	
	cout<<s1.count(4);		//returns 1

		//check if 7 is present in set
		
	if(s1.count(7)==1)
		cout<<"Present";
	else
		cout<<"Absent";
		
	if(s1.find(7)==s1.end())	//if found find gives an iterator pointing to the location of element found
								// if not found , find returns the address after the last element
			cout<<"Absent";
	else
		cout<<"Present";
		
		
		set<int>::iterator it1;		//declaring iterator to set<int>
		it1 = s1.begin();
		
		set<int> s2;
		auto it2 = s2;
		//cout<<typeid(it2).name;

s2.emplace(3);
s2.emplace(2);
s2.emplace(5);
s2.emplace(1);
		
		
		
		
		for(auto i:s2)
			i++;
		for(auto i:s2)
			cout<<"\n"<<i;
			
		//for(auto &i:s2)		//it is not possible to modify the values of a set
			//i++;		//set is readonly
			
			
	set<int> s3;
	s3.insert(1);
	s3.insert(2);
	s3.insert(3);
	s3.insert(4);
	s3.insert(5);
			
	set<int>::iterator iter;
	iter = s3.lower_bound(3);		// lower_bound returns iterator pointing to 3 if 3 exists , otherwise it returns
	cout<<(*iter);					// iterator pointing to the last element i.e. 5
			
			
	s3.erase(5);
	
	for(auto it:s3)
	cout<<"\n"<<it<<endl;
	
	iter = s3.upper_bound(5);			//since 5 is not found it returns iterator to the last element
	
	cout<<*iter;
	
	
	//clearing a set, removing all items
	//method 1:
	while(s3.empty()==false)
	{
		s3.erase(s3.begin());	//keep erasing the first element till set is empty
	}
	//method 2:
	s3.erase(s3.begin(),s3.end());
	return 0;
}
