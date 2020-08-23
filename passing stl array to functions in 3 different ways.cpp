#include<bits/stdc++.h>
using namespace std;
void f(array<int,5> x)
{
	for(auto i:x)
		cout<<i;
	cout<<"\nSize of array is "<<x.size()<<endl;
	cout<<"Type of x is "<<typeid(x).name()<<endl;
}
void g(array<int,5> *y)
{
	for(int i:*y)
		cout<<i;
	cout<<"\nSize of array is "<<y->size()<<endl;
	cout<<"Type of y is "<<typeid(y).name()<<endl;
}
void h(array<int,5> &z)
{
	for(int i:z)
		cout<<i;
	cout<<"\nSize of array is "<<z.size();
	cout<<"Type of z is "<<typeid(z).name()<<endl;
}
//typeid().name() are not very human readable.
//So to make them easy to read , g++ has c++filt
//execute the program as ./your_program_name.out | c++filt -t
//To understanf better , have a look --> https://pasteboard.co/JnETDao.png

int main()
{
	array<int,5> a;
	a = {1,2,3,4,5};
	f(a);
	g(&a);
	h(a);
	return 0;
}
