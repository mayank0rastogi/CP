#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	     int A,B,C,P,Q,R;
	     cin>>A>>B>>C>>P>>Q>>R;
	   //  int tot_v_cast=(P+Q+R)/2;
	   //  int max;
	   //  if(P>Q && P>R)
	   //  {
	   //    max=P;  
	   //  }
	   //  else if(Q>R)
	   //  {
	   //      max=Q;
	         
	   //  }
	   //  else
	   //  {
	   //      max=R;
	   //  }
	   //  int s_m1,s_m2;
	  
	   //  int fin_in;
	     
	   //   int insider_tot_cast1=P+B+C;
	   //    int insider_tot_cast2=R+A+B;
	   //   int insider_tot_cast3=Q+A+C;
     // if(insider_tot_cast1>tot_v_cast or insider_tot_cast2>tot_v_cast or insider_tot_cast3>tot_v_cast)
	   // {
	   //       cout<<"YES"<<endl;
	   // }
	   //  else
	    //  {
     // 	    cout<<"NO"<<endl;
	     // }
	   
	      
	   //   tot_v_cast=tot_v_cast/2;
	   ////   fin_in=fin_in/2;
	      
	      int tot_v_cast;
	      tot_v_cast=(P+Q+R)/2;
	      if(A+B+R>tot_v_cast or B+C+P>tot_v_cast or A+C+Q>tot_v_cast)
	      {
	          cout<<"YES"<<endl;
	      }
	      else
	      {
	          cout<<"NO"<<endl;
	      }
	     
	}
	return 0;
}
