bool findPair(int arr[], int size, int n){
    //code
    int flag=-1;
    // for(int i=0;i<size;i++)
    // {
    //   int y=arr[i]+n;
    //   for(int j=0;j<size;j++)
    //   {
    //       if(arr[j]==y)
    //       {
    //           flag=1;
               
    //           break;
    //       }
    //   }
    // }
    
//    optimized way O(n) & space-->O(n)
//using map
// unordered_map<int,int>mp;

// for(int i=0;i<size;i++)
// {
//     mp[arr[i]]=1;//use it as visited map
// }
// for(int i=0;i<size;i++)
// {
//     if(mp[arr[i]+n]) //and here check arr[i]+n if present in map than return 1 else return 0 
//     {
//         flag=1;
//         break;
//     }
// }

///optimized way O(nlogn) & space-->O(1)
///using binary search upper_bound
sort(arr,arr+size);
for(int i=0;i<size;i++)
{
    //in id vraible we have fetch the tha index of arr[i]+n 
    int id=upper_bound(arr+i+1,arr+size,arr[i]+n) -arr -1;// -arr because to get index 
    // and -1 at last bcoz upper_bound gives one index further which we find so -1 make it index no we needed 
    
    if(arr[id]-arr[i]==n)//check the id we found is correct or not
    {
        flag=1;
        break;
    }
}


    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
