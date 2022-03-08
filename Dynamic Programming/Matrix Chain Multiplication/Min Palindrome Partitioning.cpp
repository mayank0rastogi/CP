// Palindrome Partitioning using Recursion
// Given a string, a partitioning of the string is a palindrome partitioning if every substring of the partition is a palindrome. 
// Example:
//   “aba|b|bbabb|a|b|aba” is a palindrome partitioning of “ababbbabbababa”. here we have make 5 partitions
//but we need to find minimum partitions palidrome  


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
	while(i < j)
	{
	if(s[i] != s[j])
		return false;
	i++;
	j--;
	}
	return true;
}
int minPalPartion(string s, int i, int j)
{
	if( i >= j)
	{
	    return 0;
	}
	if(isPalindrome(s, i, j)==true)
	{
	    return 0;
	}
	
	int mn = INT_MAX, count;
	for(int k = i; k < j; k++)
	{
	count = minPalPartion(s, i, k) +
		minPalPartion(s, k + 1, j) + 1;

	mn = min(mn, count);
	}
	return mn;
}

int main() {
	string str = "ababbbabbababa";

	cout<<minPalPartion(str, 0, str.length() - 1) << endl;
	return 0;
}

