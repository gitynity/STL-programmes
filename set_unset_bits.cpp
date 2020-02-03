//program to count number of set unset bits in a number

#include <bits/stdc++.h>

using namespace std;

int main()
{
int a , cnt_set = 0 , cnt_unset = 0;

cin>>a;

while(a)
{
	if((a&1)==1)
		cnt_set++;
	else
		cnt_unset++;
		
	a = a>>1;	
}

cout<<"Set bits: "<<cnt_set<<" Unset bits: "<<cnt_unset;

//c++ STL has built in function for this.

cin>>a;

cnt_set = __builtin_popcount(a);		// for an intger : int has 32 bits

cout<<"Set bits = "<<cnt_set;

long x;
cin>>x;

cout<<"Set bits = "<<__builtin_popcountl(x);	//for a long : long has 64 bits

long long y;
cin>>y;

cout<<"Set bits = "<<__builtin_popcountll(y);	//for a long long : long long has at least 64 bits

cout<<"Number of leading zeroes in "<<y<<" : "<<__builtin_clzll(y);	//counts leading zeoes for long long


int n;
cin>>n;
cout<<"Number of leading zeroes in "<<n<<" : "<<__builtin_clz(n);	//counts leading zeoes for int

cout<<"Number of trailing zeroes in "<<n<<" : "<<__builtin_ctz(n);	//counts trailing zeoes for int


//nearest power of 2 which is smaller than and nearest to a given number n

//example : 13
//ans: 2^3 = 8 , thus ans is 3

cin>> n;
//lets count how many bits are used to represent the number n

int temp = 32 - __builtin_clz(n);	//since int has 32 bits in total and __builtin_clz(n) gives the number of  leading zeroes

//So one bit less than temp will be the answer 

cout<<temp - 1<<" is the nearest power of 2 which is also smaller than "<<n;

//check if a number is even

cin>>n;				//say we enter 5

								// 5 = 00000101 , now 5&1 => 00000101
								//						   & 00000001
								//						   ------------
								//							 00000001						
if((n&1)==0)
	cout<<n<<" is even";

//check if a number is a power of 2

if(( n&(n-1) ) == 0)
	cout<<n<<" is a power of 2";

//check if all bits are set

//if a number n has all bits set , then n+1 will be a power of 2

if((n&(n+1))==0)
	cout<<"all bits are set";

return 0;
}
