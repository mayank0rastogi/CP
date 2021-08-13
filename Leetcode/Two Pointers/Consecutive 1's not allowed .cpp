// Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 10^9 + 7.

// Example 1:

// Input:
// N = 3
// Output: 5
// Explanation: 5 strings are (000,
// 001, 010, 100, 101).
// Example 2:

// Input:
// N = 2
// Output: 3
// Explanation: 3 strings are
// (00,01,10).
// Your Task:
// Complete the function countStrings() which takes single integer n, as input parameters and returns an integer denoting the answer. You don't to print answer or take inputs. 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)


class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	  //intitally  string  starts building with one thats why intialize it to one
	   int endwithone=1; //"1"
	   int endwithzero=1;  //"0"
	   int sum=endwithone+endwithzero; //2
	   
	   while(n==1)
	   {
	       return sum;
	   }
	   
	  int i=2;
	   while(i<=n)
	   {
	       //Since answer may be large for this we have to modulop ecye pointer variable to 1e^9
	       //i=2,3,5
	       endwithone=endwithzero % (1000000007);//1 //2 //3
	       endwithzero=sum % (1000000007);//2  //3 //5
	       sum=endwithzero+endwithone % (1000000007);//3 //5 //8
	       i++;
	   }
	   return sum%(1000000007);
	}
};
