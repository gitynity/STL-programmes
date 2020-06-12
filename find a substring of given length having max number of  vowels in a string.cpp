#include <bits/stdc++.h>
using namespace std;

bool isVowel(char x) 
{
   if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') return true;
   else return false;
}
    
void showdq(deque <char> g) 
{ 
    deque <char> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout<< *it;
    cout<<endl; 
} 

int maxVowels(string s, int k) 
{
        int left = 0, right = k - 1, ans = 0;
        int count = 0;
        deque<char> sub , res;
        
        for(int i = 0; i < k; i++)    //initialize the counter value for the first window
        {
			    if(isVowel(s[i])) count++;
			    sub.push_back(s[i]);
        }
        
        while(true) 
        {
			if(count>ans)
            res = sub;
            
            ans = max(count, ans);
            if(isVowel(s[left])) count--;    //if the leftmost letter in the window is a vowel, then we will lose it in the next window, so decrement counter
            
            left++;
            right++;		//new window
            
            sub.pop_front();
            sub.push_back(s[right]);	//new substring
            
            
            if(right == s.length()) break;	  //end of string
            
            if(isVowel(s[right])) count++;    //if the rightmost value in the new window is a vowel then we increment the counter
        }
        
        showdq(res);
        return ans;
}

int main()
{
	string s="arafae";
	int k = 4;
	cout<<maxVowels(s,k);	
	return 0;
}

// Why have I used double-ended-queue or deque here?
// Since we are using the sliding window to select the substring.
// When the window is slided to get the next substring , 
// the left most character of the previous window is removed 
// and the character to the right of the last character of previous window is added.
// Thus we need to perform deletion from the left side and addition on the right side.
// To be able to perform this operation in O(1) time , I used deque.

// Why are these left and right deletions and insertions in deque are of O(1) time complexity?
// Because Deques are implemented using linked-list.
