#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        int limak,bob;
        cin>>limak>>bob;
        int l=0,b=0;
        for(int x=0;x<1000;x++)
        {
            if(x%2==1)
            {
                l+=x;
                if(l>limak)
                {
                   cout<<"Bob"<<endl;
                   break;
                }
            }
            else
            {
                b+=x;
                if(b>bob)
                {
                    cout<<"Limak"<<endl;
                    break;
                }
        }
    }
    }
	return 0;
}
