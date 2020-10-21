#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int arr[n], sum=0,sumofn;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sumofn=(n*(n+1))/2;
    if(sum==sumofn){
        cout<<"YES"<<endl;
    }
else{
    cout<<"NO"<<endl;
}
	// your code goes here
	return 0;
}
