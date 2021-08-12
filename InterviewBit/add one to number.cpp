vector<int> Solution::plusOne(vector<int> &v) {

	int count=0,n=v.size();

  //cont the no of 9 elements in the vector
	for(int i=0;i<n;i++)
	{
		if(v[i]==9)
		{
			count++;

		}
		else
		{
			break;
		}
	}

	if(count==n)//if true it means all elements are 9 elements
	{
		vector<int>ans;
		ans.push_back(1);//now first of all push 1 into the vector

		for(int i=0;i<n;i++)
		{
			ans.push_back(0);//now push  all other 0 into the vector
		}
		return ans;
	}

	else if(v[n-1]==9)
	{ 
		int crry=1;
		for(int i=n-1;i>=0 && crry==1;i--)
		{
                  if(v[i]==9)
                  {
                  	v[i]=0;
                  }
                  else
                  {
                  	v[i]++;
                  	crry=0;
                  }
		}

	}

	else v[n-1]++;
    reverse(v.begin(),v.end());
    for(int i=n-1;i>=0 && v[i]==0;i--)
    {
        v.pop_back();
    }
    reverse(v.begin(),v.end());
	return v;
}

