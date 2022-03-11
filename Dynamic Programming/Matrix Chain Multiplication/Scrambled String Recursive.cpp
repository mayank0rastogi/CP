// /******************************************************************************

// Welcome to GDB Online.
// GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
// C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
// Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <bits/stdc++.h>
// using namespace std;

// bool solve(string x, string y)
// {
    
    
//     //base condition checking whether if bot strings are equal or scrambled already of yes than return TRUE
//     if(x.compare(y)==0)
//     {
//         return true;
//     }
    
//     //check if eiterh of string length is less than 1 or not if yes return false as it is not scrambled
//     if(x.length()<=1 || y.length()<=1)
//     {
//         return false;
//     }
    
//     int n=x.length();
//     bool f=false;
    
//     for(int i=1;i<n-1;i++)
//     {
//          if((solve(x.substr(0,i),y.substr(n-i,i)) && solve(x.substr(i,n-i),y.substr(0,n-i))) || (solve(x.substr(0,i),y.substr(0,i)) && solve(x.substr(i,n-i),y.substr(i,n-i))))
//          {
//              f=true;
//              break;
//          }
//     }
//     return f;
   
// }
// int main()
// {
//     string x="great";
//     string y="rgtae";
//   if(x.length()!=y.length())
//     {
//         cout<<"NO"<<endl;
//     }
//     else
//     {
//         solve(x, y) ? cout << "Yes\n" : cout << "No\n";
//     }
    

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool solve(string x, string y) {
	if (x.compare(y) == 0)
	{
		return true;
	}
	if (x.length() <= 1 || y.length()<=1)
	{
		return false;
    }
	int n = x.length();
	bool f = false;
	for (int i = 1; i <= n - 1; i++) 
	{
		if ((solve(x.substr(0, i), y.substr(n - i, i)) && solve(x.substr(i,n-i), y.substr(0, n - i))) || (solve(x.substr(0, i), y.substr(0, i)) && solve(x.substr(i,n-i), y.substr(i,n-i)))) 
		{
			f = true; // change the  flag to true and break 
			break;
		}
	}

	return f;
}

int main() {
	string x="great";
	string y="rgtae";

	if (x.length() != y.length())
	{
		cout << "No\n";
	}
	else
	{
		solve(x, y) ? cout << "Yes\n" : cout << "No\n";
	}
	return 0;
}
