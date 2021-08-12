int Solution::coverPoints(vector<int> &A, vector<int> &B) {

    long long int steps=0;
	for(int i=0;i<A.size()-1;i++)
	{
        if(abs(A[i]-A[i+1])<=abs(B[i]-B[i+1]))
        {
            steps+=abs(B[i]-B[i+1]);
        }
        else
        {
            steps+=abs(A[i]-A[i+1]);
        }
    //Another approach 
// 		steps+=max(abs(A[i-1]-A[i]),abs(B[i-1]-B[i]));
	}
    return steps;
}
