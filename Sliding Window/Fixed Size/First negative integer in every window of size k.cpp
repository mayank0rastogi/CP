
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

int main() 
{
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                                                                                             
          long long i=0,j=0;
         
    
          //runn until end pointer that is j is less than size of arr
          list<long long>list;
          vector<long long>res;
          
          while (j<N)
          {
              
            if(A[j]<0)//storing -ve value in the list
            {
                list.push_back(A[j]);
            }
            
            if (j-i+1<K) 
            {
                j++; // increament j upto when the size of the size of window is not equal to required size i.e K
            }
            else if ((j-i+1)==K) // when sindow size hit to the required window size 
            {
                
              if(list.size()==0)//not found any -ve elment so push 0 in this case
              {
                  res.push_back(0);
                  
              }
              else
              {
                  //found -ve than push first element of list in resultant vector
                  res.push_back(list.front());
                  
              }
              //no remove that process -ve element from the list
              if(A[i]==list.front())
                {
                      list.pop_front();
                }
                  
                  i++;
                  j++;
            }
          }
       
       
        return res;

                                                 
 }
