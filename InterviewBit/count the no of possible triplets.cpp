#include <bits/stdc++.h>
using namespace std;

void triplet(int arr[],int n)
{
	//8,4,6,4,2,10,9,8
	// i=0: {1,2,3,4} count=4          
 //    i=1: {4}       count=1
 //    i=2: {3,4}     count=2
 //    i=3: {4}       count=1

  
	int result=0;
	vector<int>a[n];
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
           
             
			if(arr[i]>arr[j])
			{
          a[i].push_back(j);
	     }
	 }
	}

	// for(auto x:a)
	// {
	// 	cout<<x<<endl;
	// }

int sum=0;
for(int i =0;i<n;i++)
   {
   
       for(int j=0;j<a[i].size();j++)
       {
       	int element=a[i][j];
         sum+=a[element].size();//count
       	
       }
   }
 cout<<sum<<endl;
}
	// for (int i = 0; i < n; i++) {
  
 //        cout << "Elements at index "
 //             << i << ": ";
  
 //        // Displaying element at each column,
 //        // begin() is the starting iterator,
 //        // end() is the ending iterator
 //        for (auto it = a[i].begin();
 //             it != a[i].end(); it++) {
  
 //            // (*it) is used to get the
 //            // value at iterator is
 //            // pointing
 //            cout << *it << ' ';
 //        }
 //        cout << endl;
 //    }


// void printElements()
// {
  
//     // Traversing of vectors v to print
//     // elements stored in it
//     for (int i = 0; i < n; i++) {
  
//         cout << "Elements at index "
//              << i << ": ";
  
//         // Displaying element at each column,
//         // begin() is the starting iterator,
//         // end() is the ending iterator
//         for (auto it = a[i].begin();
//              it != a[i].end(); it++) {
  
//             // (*it) is used to get the
//             // value at iterator is
//             // pointing
//             cout << *it << ' ';
//         }
//         cout << endl;
//     }
// }
int main()
{

	int arr[]={8,4,6,4,2};
	// int arr[]={8,4,6,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	triplet(arr,n);
	return 0;

}



