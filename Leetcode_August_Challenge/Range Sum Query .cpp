Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3

``````


class NumArray {
public:
    vector<int>ans;
    NumArray(vector<int>& nums) {
        ans=nums;  
    }
    
    int sumRange(int left, int right) {
       int sum=0;
        for(int i=left;i<=right;i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};
