Example 1:

Input: nums = [5,4,0,3,1,6,2]
Output: 4
Explanation: 
nums[0] = 5, nums[1] = 4, nums[2] = 0, nums[3] = 3, nums[4] = 1, nums[5] = 6, nums[6] = 2.
One of the longest sets s[k]:
s[0] = {nums[0], nums[5], nums[6], nums[2]} = {5, 6, 2, 0}

  ``````````````

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<bool>vis(n, false);
        for(auto x:nums){
            int ans=0;
            while(!vis[x]){
                ans+=1;
                vis[x]=true;
                x=nums[x];
            }
            count=max(count,ans);
        }
        return count; 
    }
};
