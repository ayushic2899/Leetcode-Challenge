class Solution {
public:
    vector<vector<int>>ans;
    
    
    void generate(int start,vector<int>&curr,vector<vector<int>>&res,vector<int>&nums){
        res.push_back(curr);
        for (int i=start;i<nums.size();i++){
            if (i>start && nums[i]==nums[i-1]){
                continue;
            }
            curr.push_back(nums[i]);
            generate(i+1,curr,res,nums);
            curr.pop_back();
        }
                
       
    }
     
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>>res;
        if (nums.size()==0){
            return res;
        }
      vector<int>curr;
        sort(nums.begin(), nums.end()); 
        generate(0,curr,res,nums);
        return res;
    }
};
