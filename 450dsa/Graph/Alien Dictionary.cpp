// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
   //condition x--> //now applying dfs and goes into its complete depth when it reaches th the point 
    //that it is already visited or there is no possible path further so i simply return it 
    void dfs(int src,vector<vector<int>> &g,vector<int> &vis,string &ans)
    {
        vis[src]=1;
        for(auto x:g[src])
        {
            if(!vis[x])
            {
                dfs(x,g,vis,ans);
            }
        }
        //and convert it to normal state i.e, its original character by adding 'a' into it
        char ch=src+'a';
        //and update its ans by adding the charcter sequence back to it when condition x follows 
        ans=ch+ans;
    }
    string findOrder(string dict[], int n, int K) {
        //code here
        vector<vector<int>> g(K);
        for(int i=0;i<n-1;i++)
        {
            string w=dict[i];
            cout<<w<<endl;
            string w1=dict[i+1];
             cout<<w1<<endl;
            
            //for making the graph 
            for(int j=0;j<min(w.length(),w1.length());j++)
            {
                if(w[j]!=w1[j])
                {
                    cout<<w[j]-'a'<<endl;
                    cout<<w1[j]-'a'<<endl;
                    g[w[j]-'a'].push_back(w1[j]-'a');
                    break;
                }
            }
        }
        
        //now traverse the whole graph and apply dfs
        vector<int>vis(K,0);
        string ans="";
        for(int i=0;i<K;i++)
        {
            if(!vis[i])
            {
                dfs(i,g,vis,ans);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
