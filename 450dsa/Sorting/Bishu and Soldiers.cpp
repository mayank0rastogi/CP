Problem
Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and in each round, Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). After each round, All the soldiers who are dead in the previous round will reborn. Such that in each round there will be N soldiers to fight. As Bishu is weak in mathematics, help him to count the number of soldiers that he can kill in each round and the total sum of their powers.

INPUT:

The first line of the input contains N, the number of soldiers.

The second line contains an array of N numbers denoting the power of each soldier

This third line contains Q, which denotes the number of rounds.

Q lines follow, each line having one number denoting the power of Bishu.

OUTPUT:

For each round, the output should be an array of two numbers. The first number should be the number of soldiers that Bishu can beat, and the second number denotes the cumulative strength of all the soldiers that Bishu can beat.

CONSTRAINTS:

1<=N<=10000

1<=power of each soldier<=100

1<=Q<=10000

1<=power of bishu<=100

Sample Input
7
1 2 3 4 5 6 7
3
3
10
2
Sample Output
3 6
7 28
2 3
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
There are 7 soldiers, each with the indicated power.

There are 3 rounds.

In the first round, Bishu's power is 3, which is greater than 3 soldiers, with the cumulative power of 6. Hence, the answer is 3 6

Similarly for the next round.


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int q;
	cin>>q;
	sort(arr,arr+n);


    //taking dummy array to store prev sum
	int prevsum[n+1];

	prevsum[0]=0;

	
		for(int i=1;i<=n;i++)
		{
			prevsum[i]=prevsum[i-1]+arr[i-1];
		}
		while(q--)
		{
          int x;
		  cin>>x;
		  int idx=upper_bound(arr,arr+n,x)-arr;
		  cout<<idx<<" "<<prevsum[idx]<<endl;
		}

		
return 0;
}
