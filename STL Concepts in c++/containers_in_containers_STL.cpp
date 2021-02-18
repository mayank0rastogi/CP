/******************************************************************************

/* Containers in Containers*/
//means in case of vectors each one of the vectors including another vectors inside it 

/********************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>tree;
    int edge,n1,n2;
    cin>>edge;
    
    tree.resize(edge);//here we do'nt reserve its resize automatically upto the size
    for (const auto&i : tree) {
        cin>>n1>>n2;
        tree[n1].push_back(n2);//means 1 pe 2
                         //     &     1 pe 3
        /* code */
    }
    for(const auto&e1:tree)
    {
        for(const auto&e2:e1)
        {
            std::cout<< e2;//printed vertical vectors
        }
        cout<<endl;
    }

    return 0;
}
