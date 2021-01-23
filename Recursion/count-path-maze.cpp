#include<bits/stdc++.h>
using  namespace std;
int count_maze_path(int n, int i, int j)
{
    //since last position in n blocks is n-1
    if(i==n-1 &&j==n-1)
    {
        //return 1 bcoz we reaches at the ene
        return 1;
    }
    if(i>=n || j>=n)
    {

        return 0;
    }
    return count_maze_path(n,i+1,j)+count_maze_path(n,i,j+1);

}

int main()
{

    cout<<count_maze_path(3,0,0)<<endl;//n is 3 which is basically size of maze i.e; 3*3
}
