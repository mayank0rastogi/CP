class solution
{
  public:
int countSquares(int N) {
        // code here
        int a=sqrt(N);
        // cout<<a<<endl;
        if(a*a==N)
        {
            cout<<"Inside if "<<a-1<<endl;
            return a-1;
        }
        else
        {
            return a;
        }
   }
};
