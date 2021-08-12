vector<int> Solution::flip(string str) {

    vector<int>ans;
	int count=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='1')
		{
			count++;
		}
	}
	if(count==str.length())
	{
		return ans;
	}
    
    int diff=0,ansdiff=0,left=1,right=1,ansleft,ansright;

    for(int i=0;i<str.length();i++)
    {
    	if(str[i]=='0')
    	{
    		diff++;
    	}
    	else
    	{
    		diff--;
    	}

    	if(diff>ansdiff)
    	{
    		ansdiff=diff; 
    		ansleft=left;
    		ansright=right;
    	}
    	
    	if(diff<0)
    	{
    		diff=0;
    		left=i+1+1;//since our value always start from 1 so again add one it 
    	}
    	right++;
    }

ans.push_back(ansleft);
ans.push_back(ansright);
return ans;
}
