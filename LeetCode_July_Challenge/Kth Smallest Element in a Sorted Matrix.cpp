class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         int n=matrix.size();
         int m=matrix[0].size();
         vector<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=matrix[i][j];
                s.push_back(a);
            }
        }
        sort(s.begin(),s.end());
        return s[k-1];
    }
};


 
