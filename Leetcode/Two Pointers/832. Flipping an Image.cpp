class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       vector<int>temp;
        vector<vector<int>>v1;
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                image[i][j]=!image[i][j]; //toggle the value &  store it into image[i][j]                cout<<"image[i][j]-->"<<image[i][j]<<endl;
                temp.push_back(image[i][j]);
                
            }
            reverse(temp.begin(),temp.end());
            v1.push_back(temp);
            temp.clear();
            
        }
        return v1;
    }
};
